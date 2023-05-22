#pragma once
#include"map.h"
#include"level.h"
#include"collision.h"
#include"hazard.h"


#include"obstacle.h"
int level3(Sprite& backg,
	Texture& stonetex,
	Texture& stonerevtex,
	Texture& stone2tex
	, Texture& stone2revtex
	, Texture& stone3tex
	, Texture& stone3revtex,
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
	Texture& cointex
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
		G_LEVEL1.set_door3(window, S_DOOR, doortex, doorrevtex, opendoorrevtex);

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





		window.display();
	}
	return 1;
}

