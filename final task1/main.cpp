#include <SFML/Graphics.hpp>
#include<iostream>

#include "Hazard.h"
#include "prize.h"
#include "obstacle.h"
#include "collision.h"
#include "material.h"
#include "Hero.h"
#include "Enemy.h"
using namespace std;
using namespace sf;

int main()
{
    
    

    /* -------------------------------------------------------------------------- */
    /*                                SETTING BACKGROUND                          */
    /* -------------------------------------------------------------------------- */
    Texture platform;
    platform.loadFromFile("background.png");
    Sprite PLF;
    PLF.setTexture(platform);
    PLF.setPosition(0, 0);


    

    /* -------------------------------------------------------------------------- */
    /*                                LOADING TEXTURE                             */
    /* -------------------------------------------------------------------------- */

    Texture T;
    T.loadFromFile("sword.png");
    Texture TREE;
    TREE.loadFromFile("tree.png");
    Texture STONE;
    STONE.loadFromFile("stone.png");

    vector<Texture>dragon_frames(10);

    //for (int i = 0;i < 4;i++) {
    //    (dragon_frames[i].loadFromFile("dragon_forward" + to_string(i + 1) + ".png"));
    //        

    //}

    vector<Texture> fire_frames(10);
    for (int i = 0;i < 6;i++) {
        fire_frames[i].loadFromFile("fire" + to_string(i + 1) + ".png");
    }

    Texture heroTexture;
    heroTexture.loadFromFile("hero_movement.png");

    Texture dragonTexture;
    dragonTexture.loadFromFile("dragon.png");
   /* Texture hero_fightTexture;
    hero_fightTexture.loadFromFile("hero_fight.png");*/






    //Animation animation(&heroTexture,Vector2u(4,4), 0.1f);

   

    float deltaTime = 0;
    Clock clock;



    
    /* -------------------------------------------------------------------------- */
    /*                                DECLEARING OBSTACLE                         */
    /* -------------------------------------------------------------------------- */
    vector<Sprite>S_TREE(50);
    vector<Sprite>S_STONE(50);
    Sprite dragon_sprite;
    Sprite fire_sprite;





    /* -------------------------------------------------------------------------- */
    /*                                OBSTACLE OBJECTS                            */
    /* -------------------------------------------------------------------------- */
    Set_obstacle G_TREE(50);
    Set_obstacle G_STONE(50);
    Hazard G_DRAGON(dragon_sprite,800,800);
    Hazard G_FIRE(fire_sprite,1000,800);


    /* -------------------------------------------------------------------------- */
    /*                                DECLEARING MATERIAL                         */
    /* -------------------------------------------------------------------------- */
    Sprite A;
    Sprite c_prize;

    /* -------------------------------------------------------------------------- */
    /*                                MATERIAL OBJECTS                            */
    /* -------------------------------------------------------------------------- */

    Material G_SWORD(T);





    /* -------------------------------------------------------------------------- */
    /*                               PLAYER INFORMATION                           */
    /* -------------------------------------------------------------------------- */
    
    Hero Oshayer(&heroTexture, Vector2u(4, 4), 0.1f, 100);
    Enemy Drago(&dragonTexture, Vector2u(3, 4), 0.1f, 100);
   

    //Hero Oshayer1(&hero_fightTexture,Vector2u(4,4),0.1,100);




    /* -------------------------------------------------------------------------- */
    /*                                COLLISION CHECK                             */
    /* -------------------------------------------------------------------------- */

    Collision player_obstacle;





    sf::RenderWindow window(sf::VideoMode(1800, 1000), "SFML works!");

    window.setFramerateLimit(200);


    
    
    prize crown(700, 700, c_prize);



    



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

        window.clear(Color::White);

        window.draw(PLF);

        
        
        /* -------------------------------------------------------------------------- */
        /*                                                                            */
        /* -------------------------------------------------------------------------- */

        //modus.prize_hijack(window, c_prize);
        

        



        /* -------------------------------------------------------------------------- */
        /*                  OBSTACLE SETTING FUNCTIONS                                */
        /* -------------------------------------------------------------------------- */
        G_TREE.set_tree(window, S_TREE,TREE);
        G_STONE.set_stone(window, S_STONE,STONE);
        /* -------------------------------------------------------------------------- */
        /*        MATERIAL SETTING FUNCTION                                           */
        /* -------------------------------------------------------------------------- */
        crown.set_prize(window, c_prize);
        G_SWORD.set_material(window, A, T);

        
        /* -------------------------------------------------------------------------- */
        /*                  HERO MOVEMENT AND ANIMATION  and Other TASKS              */
        /* -------------------------------------------------------------------------- */
        //G_DRAGON.enemy_animation(window, dragon_sprite, dragon_frames);
        G_FIRE.hazard_animation(window,fire_sprite,fire_frames);

        

        Oshayer.Update_movement(heroTexture,deltaTime);
        
        Oshayer.Draw(window);
        Oshayer.prize_hijack(window, c_prize);
        
        Drago.Update_enemy_movement(dragonTexture,deltaTime,Oshayer.body);
        Drago.Draw(window);


        /* -------------------------------------------------------------------------- */
        /*                  COLLISION CHK FUNCTION                                    */
        /* -------------------------------------------------------------------------- */



        player_obstacle.collision_chk(Oshayer.body, S_STONE);

      


        window.display();



    }




    return 0;
}
