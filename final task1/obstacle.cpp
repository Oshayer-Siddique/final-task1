#include "obstacle.h"



Set_obstacle::Set_obstacle(int num) {
	obstacle_num = num;
}

void Set_obstacle::set_water(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex) {



	for (int i = 0;i < 10;i++) {
		S_WATER[i].setTexture(watertex);
	}

	S_WATER[0].setPosition(1000, 200);
	S_WATER[1].setPosition(1100, 300);


	for (int i = 0;i < 2;i++) {
		window.draw(S_WATER[i]);
	}


}

void Set_obstacle::set_borber(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex)
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

void Set_obstacle::set_borderhori(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex)
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

void Set_obstacle::set_door(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex)
{

	for (int i = 0;i < 10;i++) {
	}
	S_DOOR[0].setTexture(doortex);
	S_DOOR[1].setTexture(doorrevtex);

	S_DOOR[1].setPosition(100, 0);
	S_DOOR[0].setPosition(1670, 890);


	for (int i = 0;i < 2;i++) {
		window.draw(S_DOOR[i]);
	}
}

void Set_obstacle::set_chest(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex)
{

	for (int i = 0;i < 10;i++) {
		S_CHEST[i].setTexture(chesttex);
	}

	S_CHEST[0].setPosition(1000, 200);
	S_CHEST[1].setPosition(1100, 300);


	for (int i = 0;i < 2;i++) {
		window.draw(S_CHEST[i]);
	}
}

void Set_obstacle::set_openchest(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex)
{

	for (int i = 0;i < 10;i++) {
		S_OPENCHEST[i].setTexture(openchesttex);
	}

	S_OPENCHEST[0].setPosition(1000, 200);
	S_OPENCHEST[1].setPosition(1100, 300);


	for (int i = 0;i < 2;i++) {
		window.draw(S_OPENCHEST[i]);
	}
}



void Set_obstacle::set_stone(RenderWindow& window, vector<Sprite>& S_STONE, Texture& stonetex) {


	for (int i = 0; i < 25; i++) {
		S_STONE[i].setTexture(stonetex);
	}
	/*for (int i = 25; i < 50; i++) {
		S_STONE[i].setTexture(stonerevtex);
	}*/




	S_STONE[0].setPosition(900, 170);
	S_STONE[1].setPosition(1050, 170);
	S_STONE[2].setPosition(1200, 170);
	S_STONE[3].setPosition(1350, 170);
	S_STONE[4].setPosition(1500, 170);
	S_STONE[5].setPosition(900, 220);
	S_STONE[6].setPosition(1050, 220);
	S_STONE[7].setPosition(900, 270);
	S_STONE[8].setPosition(1050, 270);
	S_STONE[9].setPosition(900, 320);
	S_STONE[10].setPosition(1050, 320);
	S_STONE[11].setPosition(1200, 320);
	S_STONE[12].setPosition(1500, 320);

	S_STONE[13].setPosition(0, 825);
	S_STONE[14].setPosition(0, 335);
	S_STONE[15].setPosition(150, 825);
	S_STONE[16].setPosition(150, 335);
	S_STONE[17].setPosition(150, 825);
	S_STONE[18].setPosition(150, 335);
	S_STONE[19].setPosition(300, 825);
	S_STONE[20].setPosition(300, 335);

	/*S_STONE[25].setPosition(0, 525);
	S_STONE[28].setPosition(0, 475);
	S_STONE[26].setPosition(0, 675);
	S_STONE[27].setPosition(400, 555);
	S_STONE[29].setPosition(400, 515);
	S_STONE[29].setPosition(0, 335);*/


	for (int i = 0;i < 20;i++) {
		window.draw(S_STONE[i]);
	}
	for (int i = 20;i < 21;i++) {
		window.draw(S_STONE[i]);
	}
	/*for (int i = 25;i < 30;i++) {
		window.draw(S_STONE[i]);
	}*/
}