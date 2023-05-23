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

#include"obstacle.h"
int level2(Sprite& backg,
	Sprite& c_prize1,
	Sprite& c_prize2,
	Sprite& A,
	Sprite& fire_sprite,
	Texture& stonetex,
	Texture& stonerevtex,
	Texture& stone2tex,
	Texture& stone2revtex,
	Texture& stone3tex,
	Texture& stone3revtex,
	Texture& watertex,
	Texture& bordertex,
	Texture& borderhoritex,
	Texture& opendoortex,
	Texture& opendoorrevtex,
	Texture& doortex,
	Texture& doorrevtex,
	Texture& chesttex,
	Texture& openchesttex,
	Texture& torchtex,
	Texture& fireanime,
	Texture& heroTexture,
	Texture& dragonTexture,
	Texture& firetexture,
	Texture& spelltexture,
	Texture& fireballTexture,
	Texture& SkeletonTexture,
	Texture& dragonTexture2,
	Texture& Wolftexture
	
)
{

	Clock clock;
	float deltaTime = 0;



	//Sprite stone, water, border, borderhori, door, chest, openchest;






	


	Set_obstacle G_LEVEL1(50);

	vector<Sprite>S_WATER(50);
	vector<Sprite>S_STONE(50);
	vector<Sprite>S_STONE2(50);
	vector<Sprite>S_STONE3(50);

	vector<Sprite>S_BORDER(50);
	vector<Sprite>S_BORDERHORI(50);

	vector<Sprite>S_DOOR(50);
	vector<Sprite>S_CHEST(50);
	vector<Sprite>S_OPENCHEST(50);


	Hazard lightlamp(&torchtex, Vector2u(3, 2), 0.3f, 100, 1750, 920);
	Hazard lightlamp5(&torchtex, Vector2u(3, 2), 0.3f, 100, 13, 35);
	Hazard lightlamp6(&torchtex, Vector2u(3, 2), 0.3f, 100, 13, 920);
	Hazard lightlamp7(&torchtex, Vector2u(3, 2), 0.3f, 100, 1750, 35);
	Hazard lightlamp1(&torchtex, Vector2u(3, 2), 0.3f, 100, 270, 250);
	Hazard lightlamp2(&torchtex, Vector2u(3, 2), 0.3f, 100, 1560, 650);
	Hazard lightlamp3(&torchtex, Vector2u(3, 2), 0.3f, 100, 1300, 650);
	Hazard lightlamp4(&torchtex, Vector2u(3, 2), 0.3f, 100, 490, 250);
	Hazard lightlamp8(&torchtex, Vector2u(3, 2), 0.3f, 100, 880, 355);
	Hazard lightlamp9(&torchtex, Vector2u(3, 2), 0.3f, 100, 480, 530);
	Hazard lightlamp10(&torchtex, Vector2u(3, 2), 0.3f, 100, 1330, 430);
	Hazard lightlamp11(&torchtex, Vector2u(3, 2), 0.3f, 100, 880, 765);

	Hazard FireAnime(&fireanime, Vector2u(8, 1), 0.1f, 100, 550, 530);
	Hazard FireAnime1(&fireanime, Vector2u(8, 1), 0.1f, 100, 550, 630);
	Hazard FireAnime2(&fireanime, Vector2u(8, 1), 0.1f, 100, 550, 730);
	Hazard FireAnime3(&fireanime, Vector2u(8, 1), 0.1f, 100, 550, 830);
	Hazard FireAnime4(&fireanime, Vector2u(8, 1), 0.1f, 100, 625, 530);
	Hazard FireAnime5(&fireanime, Vector2u(8, 1), 0.1f, 100, 625, 630);
	Hazard FireAnime6(&fireanime, Vector2u(8, 1), 0.1f, 100, 625, 730);
	Hazard FireAnime7(&fireanime, Vector2u(8, 1), 0.1f, 100, 625, 830);
	Hazard FireAnime8(&fireanime, Vector2u(8, 1), 0.1f, 100, 700, 530);
	Hazard FireAnime9(&fireanime, Vector2u(8, 1), 0.1f, 100, 700, 630);
	Hazard FireAnime10(&fireanime, Vector2u(8, 1), 0.1f, 100, 700, 730);
	Hazard FireAnime11(&fireanime, Vector2u(8, 1), 0.1f, 100, 700, 830);
	


	

	Collision player_obstacle;


	prize ruby1(50, 50, c_prize1);
	prize ruby2(1650,850,c_prize2);



	float w;
	w = 100;

	float dh;
	dh = 90;





	Animation animation(&heroTexture, Vector2u(4, 4), 0.1f);



	//Material G_SWORD(T);




	Hero Oshayer(&heroTexture, Vector2u(7, 13), 0.1f, 1600, 50);
	Enemy Drago(&dragonTexture2, Vector2u(12, 4), 0.1f, 100, 50, 00);
	Enemy WOLF(&Wolftexture, Vector2u(9, 4), 0.1f, 70, 1100, 800);
	//Hazard dangerfire(&firetexture, Vector2u(9, 1), 0.1f, 100, 1000, 500);
	//Hazard G_greenfire(&greenfire, Vector2u(8, 1), 0.1f, 100, 800, 500);

	SpellCast G_redSpell(spelltexture);

	SpellCast dragonfire(fireballTexture);














	RenderWindow window(VideoMode(1800, 1000), "Level2");



	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(backg);

		
		





		//G_LEVEL1.set_stone(window,S_STONE,stonetex);
		G_LEVEL1.set_borber(window, S_BORDER, bordertex);
		G_LEVEL1.set_borderhori(window, S_BORDERHORI, borderhoritex);
		G_LEVEL1.set_door2(window, S_DOOR, doortex, doorrevtex);

		G_LEVEL1.set_chest2(window, S_CHEST, chesttex);
		G_LEVEL1.set_openchest2(window, S_OPENCHEST, openchesttex);
		G_LEVEL1.set_stonethree2(window, S_STONE3, stone3tex, stone3revtex);
		G_LEVEL1.set_stonetwo2(window, S_STONE2, stone2tex, stone2revtex);



		lightlamp1.Update_hazard(torchtex, deltaTime);
		lightlamp1.Draw(window);
		lightlamp2.Update_hazard(torchtex, deltaTime);
		lightlamp2.Draw(window);
		lightlamp3.Update_hazard(torchtex, deltaTime);
		lightlamp3.Draw(window);
		lightlamp4.Update_hazard(torchtex, deltaTime);
		lightlamp4.Draw(window);
		lightlamp.Update_hazard(torchtex, deltaTime);
		lightlamp.Draw(window);
		lightlamp5.Update_hazard(torchtex, deltaTime);
		lightlamp5.Draw(window);
		lightlamp6.Update_hazard(torchtex, deltaTime);
		lightlamp6.Draw(window);
		lightlamp7.Update_hazard(torchtex, deltaTime);
		lightlamp7.Draw(window);
		lightlamp8.Update_hazard(torchtex, deltaTime);
		lightlamp8.Draw(window);
		lightlamp9.Update_hazard(torchtex, deltaTime);
		lightlamp9.Draw(window);
		lightlamp10.Update_hazard(torchtex, deltaTime);
		lightlamp10.Draw(window);
		lightlamp11.Update_hazard(torchtex, deltaTime);
		lightlamp11.Draw(window);

		FireAnime.Update_hazard(fireanime, deltaTime);
		FireAnime.Draw(window);
		FireAnime1.Update_hazard(fireanime, deltaTime);
		FireAnime1.Draw(window);
		FireAnime2.Update_hazard(fireanime, deltaTime);
		FireAnime2.Draw(window);
		FireAnime3.Update_hazard(fireanime, deltaTime);
		FireAnime3.Draw(window);
		FireAnime4.Update_hazard(fireanime, deltaTime);
		FireAnime4.Draw(window);
		FireAnime5.Update_hazard(fireanime, deltaTime);
		FireAnime5.Draw(window);
		FireAnime6.Update_hazard(fireanime, deltaTime);
		FireAnime6.Draw(window);
		FireAnime7.Update_hazard(fireanime, deltaTime);
		FireAnime7.Draw(window);
		FireAnime8.Update_hazard(fireanime, deltaTime);
		FireAnime8.Draw(window);
		FireAnime9.Update_hazard(fireanime, deltaTime);
		FireAnime9.Draw(window);
		FireAnime10.Update_hazard(fireanime, deltaTime);
		FireAnime10.Draw(window);
		FireAnime11.Update_hazard(fireanime, deltaTime);
		FireAnime11.Draw(window);


















		ruby1.set_prize(window, c_prize1);
		ruby2.set_prize(window, c_prize2);

		Oshayer.prize_hijack(window, c_prize1);



		//   G_SWORD.set_material(window, A, T);


		   /* -------------------------------------------------------------------------- */
		   /*                  HERO MOVEMENT AND ANIMATION  and Other TASKS              */
		   /* -------------------------------------------------------------------------- */
		   //G_DRAGON.enemy_animation(window, dragon_sprite, dragon_frames);
		   //G_FIRE.hazard_animation(window,fire_sprite,fire_frames);

		int x = ruby1.get_prize_position(c_prize1);

		int x1 = c_prize2.getPosition().x;



		//cout << x << endl;

		if (x == -1500) {
			Oshayer.Update_movement(heroTexture, deltaTime, 100);

		}
		else if (x1 == -1800) {
			Oshayer.Update_movement(heroTexture, deltaTime, 100);

		}

		else {
			Oshayer.Update_movement(heroTexture, deltaTime, 125);

		}

		dragonfire.spellTimer();
		//dragonfire.Shoot_hero(window, deltaTime,Drago.enemyBody,Oshayer.body);



		G_redSpell.Shoot(window, deltaTime, Oshayer.body, Drago.enemyBody);
		//G_redSpell.Shoot(window, deltaTime, Drago.enemyBody, Oshayer.body);
		//dragonfire.Shoot(window, deltaTime, Drago.enemyBody, Oshayer.body);

		dragonfire.Shoot_hero(window, deltaTime, Drago.enemyBody, Oshayer.body);



		//Oshayer.Health(Oshayer.body, Drago.enemyBody);

		//dragonfire.spellTimer(Drago.enemyBody);

		Oshayer.Update_Clock(heroTexture, deltaTime, 100);
		Oshayer.special_movement(heroTexture, deltaTime, 200);


		Oshayer.Draw(window);
		

		Drago.Update_enemy_movement(dragonTexture, deltaTime, Oshayer.body);
		Drago.Draw(window);

		//if (Oshayer.body.getPosition().x < 800) {
		//    SKELETON.Update_ground_enemy_movement(SkeletonTexture, deltaTime, Oshayer.body);
		//    

		//}

		WOLF.Update_ground_enemy_movement(Wolftexture, deltaTime, Oshayer.body, 500);
		WOLF.Draw(window);



		/*
				dangerfire.Update_hazard(firetexture, deltaTime);
				dangerfire.Draw(window);

				G_greenfire.Update_hazard(greenfire, deltaTime);
				G_greenfire.Draw(window);    */



		RectangleShape healthbar_player(Vector2f(w, 10));

		healthbar_player.setFillColor(Color::Green);

		healthbar_player.setPosition(Oshayer.body.getPosition());

		if (player_obstacle.collision_chk_S(Oshayer.body, dragonfire.spell_sprite)) {

			w -= 0.3;

			if (w <= 0) {
				w = 0;
				Oshayer.Update_death(heroTexture, deltaTime, 100);
				break;
			}




		}

		else if (player_obstacle.collision_chk_S(Oshayer.body, WOLF.enemyBody)) {
			w -= 0.03;
			if (w <= 0) {
				w = 0;
				
			}

		}

		window.draw(healthbar_player);


		RectangleShape healthbar_dragon(Vector2f(dh, 10));

		healthbar_dragon.setFillColor(Color::Red);
		healthbar_dragon.setPosition(Drago.enemyBody.getPosition());

		if (player_obstacle.collision_chk_S(Drago.enemyBody, G_redSpell.spell_sprite)) {
			dh -= 0.1;
			if (dh <= 0) {
				dh = 0;
				Drago.enemyBody.setPosition(-5000, -5000);
			}
		}
		else if ((player_obstacle.collision_chk_S(Oshayer.body, FireAnime.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime1.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime2.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime3.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime4.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime5.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime6.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime7.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime8.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime9.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime10.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime11.hazardBody)))
			 {
			w -= 0.02;
			if (w <= 0) {
				w = 0;
				break;
			}
		}


		



		window.draw(healthbar_dragon);

		FloatRect a = Oshayer.body.getGlobalBounds();
		FloatRect b = Drago.enemyBody.getGlobalBounds();


		if (a.intersects(c_prize2.getGlobalBounds())) {
			if (Keyboard::isKeyPressed(Keyboard::H)) {
				c_prize2.setPosition(1800, -1800);
			}
			else if (Keyboard::isKeyPressed(Keyboard::R)) {
				c_prize2.setPosition(Oshayer.body.getPosition());
			}

		}


		cout << c_prize1.getPosition().x << " " << c_prize2.getPosition().x << endl;


		if (c_prize1.getPosition().x >= 100 and c_prize1.getPosition().x <= 200 and c_prize1.getPosition().y >= 890 and c_prize2.getPosition().x == 1800) {
			cout << "MISSION SUCCESS" << endl;
			return 2;
		}







		//Oshayer.collider(S_STONE);

		//cout << player_obstacle.collision_chk_S(Oshayer.body, Drago.enemyBody) << endl;


		//G_LEVEL1.set_stone(window,S_STONE,stonetex);

		player_obstacle.collision_chk(Oshayer.body, S_STONE);
		player_obstacle.collision_chk(Oshayer.body, S_STONE2);
		player_obstacle.collision_chk(Oshayer.body, S_STONE3);
		player_obstacle.collision_chk(Oshayer.body, S_BORDER);
		player_obstacle.collision_chk(Oshayer.body, S_BORDERHORI);
		player_obstacle.collision_chk(Drago.enemyBody, S_STONE);
		player_obstacle.collision_chk(Drago.enemyBody, S_STONE2);
		player_obstacle.collision_chk(Drago.enemyBody, S_STONE3);
		
		player_obstacle.collision_chk(Drago.enemyBody, S_BORDER);
		player_obstacle.collision_chk(Drago.enemyBody, S_BORDERHORI);
		player_obstacle.collision_chk(WOLF.enemyBody, S_STONE);
		player_obstacle.collision_chk(WOLF.enemyBody, S_STONE2);
		player_obstacle.collision_chk(WOLF.enemyBody, S_STONE3);





		window.display();
	}
	return 1;
}
