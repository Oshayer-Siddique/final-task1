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
int level3(Sprite& backg,
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
	Texture& dragontexture3,
	Texture& monsterTexture

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


	Hazard lightlamp(&torchtex, Vector2u(14, 1), 0.1f, 100, 1740, 920);
	Hazard lightlamp5(&torchtex, Vector2u(14, 1), 0.1f, 100, 13, 35);
	Hazard lightlamp6(&torchtex, Vector2u(14, 1), 0.1f, 100, 13, 920);
	Hazard lightlamp7(&torchtex, Vector2u(14, 1), 0.1f, 100, 1740, 35);

	Hazard lightlamp1(&torchtex, Vector2u(14, 1), 0.1f, 100, 800, 680);
	Hazard lightlamp2(&torchtex, Vector2u(14, 1), 0.1f, 100, 500, 270);
	Hazard lightlamp3(&torchtex, Vector2u(14, 1), 0.1f, 100, 1300, 680);
	Hazard lightlamp4(&torchtex, Vector2u(14, 1), 0.1f, 100, 1000, 270);
	Hazard lightlamp8(&torchtex, Vector2u(14, 1), 0.1f, 100, 1300, 200);
	Hazard lightlamp9(&torchtex, Vector2u(14, 1), 0.1f, 100, 1550, 200);
	Hazard lightlamp10(&torchtex, Vector2u(14, 1), 0.1f, 100, 1300, 430);
	Hazard lightlamp11(&torchtex, Vector2u(14, 1), 0.1f, 100, 500, 520);
	Hazard lightlamp12(&torchtex, Vector2u(14, 1), 0.1f, 100, 150, 750);
	Hazard lightlamp13(&torchtex, Vector2u(14, 1), 0.1f, 100, 400, 750);


	Hazard FireAnime(&fireanime, Vector2u(8, 1), 0.1f, 100, 0, 376);
	Hazard FireAnime1(&fireanime, Vector2u(8, 1), 0.1f, 100, 134, 460);
	Hazard FireAnime2(&fireanime, Vector2u(8, 1), 0.1f, 100, 134, 582);
	Hazard FireAnime3(&fireanime, Vector2u(8, 1), 0.1f, 100, 70, 376);
	Hazard FireAnime4(&fireanime, Vector2u(8, 1), 0.1f, 100, 70, 460);
	Hazard FireAnime5(&fireanime, Vector2u(8, 1), 0.1f, 100, 70, 582);
	Hazard FireAnime6(&fireanime, Vector2u(8, 1), 0.1f, 100, 70, 704);
	Hazard FireAnime7(&fireanime, Vector2u(8, 1), 0.1f, 100, 134, 704);


	Collision player_obstacle;


	prize ruby1(50, 50, c_prize1);

	prize ruby2(1650, 850, c_prize2);


	float w;
	w = 100;

	float dh;
	dh = 90;





	Animation animation(&heroTexture, Vector2u(4, 4), 0.1f);



	//Material G_SWORD(T);




	Hero Oshayer(&heroTexture, Vector2u(7, 13), 0.1f, 900, 10);
	Enemy Drago(&dragontexture3, Vector2u(3, 4), 0.1f, 100, 200, 800);
	Enemy SKELETON(&monsterTexture, Vector2u(9, 4), 0.1f, 70, 1200, 900);
	//Hazard dangerfire(&firetexture, Vector2u(9, 1), 0.1f, 100, 1000, 500);
	//Hazard G_greenfire(&greenfire, Vector2u(8, 1), 0.1f, 100, 800, 500);

	SpellCast G_redSpell(spelltexture);

	SpellCast dragonfire(fireballTexture);





	RenderWindow window(VideoMode(1800, 1000), "Level3");



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
		G_LEVEL1.set_door3(window, S_DOOR, doortex, doorrevtex);

		G_LEVEL1.set_chest3(window, S_CHEST, chesttex);
		G_LEVEL1.set_openchest3(window, S_OPENCHEST, openchesttex);
		G_LEVEL1.set_stonethree3(window, S_STONE3, stone3tex, stone3revtex);
		G_LEVEL1.set_stonetwo3(window, S_STONE2, stone2tex, stone2revtex);



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
		lightlamp12.Update_hazard(torchtex, deltaTime);
		lightlamp12.Draw(window);
		lightlamp13.Update_hazard(torchtex, deltaTime);
		lightlamp13.Draw(window);


		//FireAnime.Update_hazard(fireanime, deltaTime);
		//FireAnime.Draw(window);
		//FireAnime1.Update_hazard(fireanime, deltaTime);
		//FireAnime1.Draw(window);
		//FireAnime2.Update_hazard(fireanime, deltaTime);
		//FireAnime2.Draw(window);
		FireAnime3.Update_hazard(fireanime, deltaTime);
		FireAnime3.Draw(window);
		FireAnime4.Update_hazard(fireanime, deltaTime);
		FireAnime4.Draw(window);
		FireAnime5.Update_hazard(fireanime, deltaTime);
		FireAnime5.Draw(window);
		/*FireAnime6.Update_hazard(fireanime, deltaTime);
		FireAnime6.Draw(window);
		FireAnime7.Update_hazard(fireanime, deltaTime);
		FireAnime7.Draw(window);*/











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

		SKELETON.Update_ground_enemy_movement(SkeletonTexture, deltaTime, Oshayer.body, 500);
		SKELETON.Draw(window);



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

		else if (player_obstacle.collision_chk_S(Oshayer.body, SKELETON.enemyBody)) {
			w -= 0.03;
			if (w <= 0) {
				w = 0;

			}

		}

		else if((player_obstacle.collision_chk_S(Oshayer.body, FireAnime3.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime4.hazardBody)) or
			(player_obstacle.collision_chk_S(Oshayer.body, FireAnime5.hazardBody))){

			w -= 0.02;
			if (w <= 0) {
				w = 0;
				break;
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


		if (c_prize1.getPosition().x >= 900 and c_prize1.getPosition().x <= 1000 and c_prize1.getPosition().y >= 890 and c_prize2.getPosition().x >= 1800) {
			cout << "MISSION SUCCESS" << endl;
			return 1;
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
		player_obstacle.collision_chk(SKELETON.enemyBody, S_STONE);
		player_obstacle.collision_chk(SKELETON.enemyBody, S_STONE2);
		player_obstacle.collision_chk(SKELETON.enemyBody, S_STONE3);
		





		window.display();
	}
	return 2;
}
