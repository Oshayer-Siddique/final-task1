#include "obstacle.h"


//Set_obstacle::Set_obstacle(int num) {
//	obstacle_num = num;
//}

void Set_obstacle::set_water4(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex) {



	for (int i = 0;i < 10;i++) {
		S_WATER[i].setTexture(watertex);
	}

	S_WATER[0].setPosition(1000, 200);
	S_WATER[1].setPosition(1100, 300);


	for (int i = 0;i < 2;i++) {
		window.draw(S_WATER[i]);
	}


}

void Set_obstacle::set_borber4(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex)
{

	for (int i = 0;i < 20;i++) {
		S_BORDER[i].setTexture(bordertex);
	}

	S_BORDER[0].setPosition(20, 0);
	S_BORDER[1].setPosition(20, 980);



	for (int i = 0;i < 2;i++) {
		window.draw(S_BORDER[i]);
	}
}

void Set_obstacle::set_borderhori4(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex)
{

	for (int i = 0;i < 10;i++) {
		S_BORDERHORI[i].setTexture(borderhoritex);
	}

	S_BORDERHORI[0].setPosition(0, 0);
	S_BORDERHORI[1].setPosition(1780, 20);


	for (int i = 0;i < 2;i++) {
		window.draw(S_BORDERHORI[i]);
	}
}

void Set_obstacle::set_door4(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex)
{

	for (int i = 0;i < 10;i++) {
	}
	S_DOOR[0].setTexture(doortex);
	S_DOOR[1].setTexture(doorrevtex);
	S_DOOR[2].setTexture(doorrevtex);


	S_DOOR[2].setPosition(700, 10);
	S_DOOR[1].setPosition(700, 10);

	S_DOOR[0].setPosition(1600, 890);

	for (int i = 0;i < 3;i++) {
		window.draw(S_DOOR[i]);
	}
}

void Set_obstacle::set_chest4(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex)
{

	for (int i = 0;i < 10;i++) {
		S_CHEST[i].setTexture(chesttex);
	}

	S_CHEST[0].setPosition(630, 580);
	S_CHEST[1].setPosition(1580, 70);


	for (int i = 0;i < 2;i++) {
		window.draw(S_CHEST[i]);
	}
}

void Set_obstacle::set_openchest4(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex)
{

	for (int i = 0;i < 10;i++) {
		S_OPENCHEST[i].setTexture(openchesttex);
	}

	S_OPENCHEST[0].setPosition(615, 560);
	S_OPENCHEST[1].setPosition(1565, 50);


	for (int i = 0;i < 2;i++) {
		window.draw(S_OPENCHEST[i]);
	}
}



void Set_obstacle::set_stone4(RenderWindow& window, vector<Sprite>& S_STONE, Texture& stonetex, Texture& stonerevtex) {


	for (int i = 0; i < 25; i++) {
		S_STONE[i].setTexture(stonetex);
	}
	for (int i = 25; i < 50; i++) {
		S_STONE[i].setTexture(stonerevtex);
	}




	/*S_STONE[0].setPosition(900, 170);*/



	/*for (int i = 0;i < 20;i++) {
		window.draw(S_STONE[i]);
	}
	for (int i = 20;i < 23;i++) {
		window.draw(S_STONE[i]);
	}
	for (int i = 25;i < 31;i++) {
		window.draw(S_STONE[i]);
	}*/
}
void Set_obstacle::set_stonetwo4(RenderWindow& window, vector<Sprite>& S_STONE2, Texture& stone2tex, Texture& stonerev2tex) {


	for (int i = 0; i < 4; i++) {
		S_STONE2[i].setTexture(stone2tex);
	}
	for (int i = 25; i < 50; i++) {
		S_STONE2[i].setTexture(stonerev2tex);
	}




	S_STONE2[0].setPosition(1230, 470);
	//	S_STONE2[1].setPosition(150, 750);
		/*S_STONE2[2].setPosition(900, 270);
		S_STONE2[3].setPosition(900, 320);



	S_STONE[22].setColor(sf::Color(255, 255, 255, 128));
	*/
	S_STONE2[25].setPosition(720, 530);
	S_STONE2[26].setPosition(
		720, 530);
	S_STONE2[27].setPosition(1180, 220);
	S_STONE2[28].setPosition(800, 20);





	for (int i = 0;i < 1;i++) {
		window.draw(S_STONE2[i]);
	}
	////for (int i = 20;i < 23;i++) {
	////	window.draw(S_STONE2[i]);
	////}
	for (int i = 25;i < 29;i++) {
		window.draw(S_STONE2[i]);
	}
}






void Set_obstacle::set_stonethree4(RenderWindow& window, vector<Sprite>& S_STONE3, Texture& stone3tex, Texture& stonerev3tex) {


	for (int i = 0; i < 5; i++) {
		S_STONE3[i].setTexture(stone3tex);
	}
	for (int i = 25; i < 31; i++) {
		S_STONE3[i].setTexture(stonerev3tex);
	}




	S_STONE3[25].setPosition(20, 530);
	S_STONE3[26].setPosition(70, 530);

	S_STONE3[27].setPosition(1680, 20);
	S_STONE3[28].setPosition(1730, 20);
	//S_STONE3[29].setPosition(450, 530);
	//S_STONE3[30].setPosition(1350, 20);


	//S_STONE[22].setColor(sf::Color(255, 255, 255, 128));

	S_STONE3[0].setPosition(20, 240);
	S_STONE3[1].setPosition(120, 930);


	S_STONE3[2].setPosition(270, 530);
	S_STONE3[3].setPosition(1230, 20);
	S_STONE3[4].setPosition(1150, 750);



	for (int i = 0;i < 5;i++) {
		window.draw(S_STONE3[i]);
	}
	for (int i = 25;i < 29;i++) {
		window.draw(S_STONE3[i]);
	}

}
