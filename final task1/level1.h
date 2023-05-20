#pragma once
#include"level.h"
#include"collision.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<string>
#include "Hazard.h"
#include "prize.h"
#include "obstacle.h"
#include "collision.h"
#include "material.h"
#include "Hero.h"
#include "Enemy.h"
#include "mainmenu.h"
#include "SpellCast.h"
#include"obstacle.h"
int level1(Sprite& backg,
    Sprite& c_prize,
    Sprite& A,
    Sprite& fire_sprite,
    Texture& stonetex,
    Texture& stonerevtex,
    Texture& watertex,
    Texture& bordertex,
    Texture& borderhoritex,
    Texture& opendoortex,
    Texture& opendoorrevtex,
    Texture& doortex,
    Texture& doorrevtex,
    Texture& chesttex,
    Texture& openchesttex,
    Texture& heroTexture,
    Texture& dragonTexture,
    Texture& firetexture,
    Texture& greenfire,
    Texture& spelltexture
)
{

	//Sprite stone, water, border, borderhori, door, chest, openchest;


    float deltaTime = 0;
    Clock clock;





	Set_obstacle G_LEVEL1(50);

	vector<Sprite>S_WATER(50);
	vector<Sprite>S_STONE(50);


	vector<Sprite>S_BORDER(50);
	vector<Sprite>S_BORDERHORI(50);

	vector<Sprite>S_DOOR(50);
	vector<Sprite>S_CHEST(50);


    Collision player_obstacle;


    prize crown(700, 700, c_prize);



    Animation animation(&heroTexture, Vector2u(4, 4), 0.1f);



    //Material G_SWORD(T);




    Hero Oshayer(&heroTexture, Vector2u(7, 12), 0.1f);
    Enemy Drago(&dragonTexture, Vector2u(3, 4), 0.1f, 100);
    Hazard dangerfire(&firetexture, Vector2u(9, 1), 0.1f, 100, 1000, 500);
    Hazard G_greenfire(&greenfire, Vector2u(8, 1), 0.1f, 100, 800, 500);

    SpellCast G_redSpell(spelltexture);





















	RenderWindow window(VideoMode(1800, 1000), "Level1");

	while (window.isOpen())
	{


        deltaTime = clock.restart().asSeconds();
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        /* -------------------------------------------------------------------------- */
        /*                  BACKGROUND DRAW                                           */
        /* -------------------------------------------------------------------------- */

        window.clear();
        window.draw(backg);


        /* -------------------------------------------------------------------------- */
        /*                                                                            */
        /* -------------------------------------------------------------------------- */

        //modus.prize_hijack(window, c_prize);






        /* -------------------------------------------------------------------------- */
        /*                  OBSTACLE SETTING FUNCTIONS                                */
        /* -------------------------------------------------------------------------- */

        /* -------------------------------------------------------------------------- */
        /*        MATERIAL SETTING FUNCTION                                           */
        /* -------------------------------------------------------------------------- */
       crown.set_prize(window, c_prize);
     //   G_SWORD.set_material(window, A, T);


        /* -------------------------------------------------------------------------- */
        /*                  HERO MOVEMENT AND ANIMATION  and Other TASKS              */
        /* -------------------------------------------------------------------------- */
        //G_DRAGON.enemy_animation(window, dragon_sprite, dragon_frames);
        //G_FIRE.hazard_animation(window,fire_sprite,fire_frames);

        int x = crown.get_prize_position(c_prize);

        cout << x << endl;

        if (x == -1500) {
            Oshayer.Update_movement(heroTexture, deltaTime, 70);

        }
        else {
            Oshayer.Update_movement(heroTexture, deltaTime, 100);

        }





        G_redSpell.Shoot(window, deltaTime, Oshayer.body, Drago.enemyBody);

        Oshayer.Health(Oshayer.body, Drago.enemyBody);






        Oshayer.Draw(window);
        Oshayer.prize_hijack(window, c_prize);

        Drago.Update_enemy_movement(dragonTexture, deltaTime, Oshayer.body);
        Drago.Draw(window);


        dangerfire.Update_hazard(firetexture, deltaTime);
        dangerfire.Draw(window);

        G_greenfire.Update_hazard(greenfire, deltaTime);
        G_greenfire.Draw(window);                              

		

		//G_LEVEL1.set_stone(window,S_STONE,stonetex);
		G_LEVEL1.set_borber(window, S_BORDER, bordertex);
		G_LEVEL1.set_borderhori(window, S_BORDERHORI, borderhoritex);
		G_LEVEL1.set_door(window, S_DOOR, doortex, doorrevtex);
		G_LEVEL1.set_stone(window, S_STONE, stonetex);

        player_obstacle.collision_chk(Oshayer.body,S_BORDER);
        player_obstacle.collision_chk(Oshayer.body,S_BORDERHORI);
        player_obstacle.collision_chk(Oshayer.body,S_STONE);




		window.display();
	}
    return 0;
}