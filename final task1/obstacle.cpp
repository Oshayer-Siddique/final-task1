#include "obstacle.h"



Set_obstacle::Set_obstacle(int num) {
	obstacle_num = num;
}

void Set_obstacle::set_tree(RenderWindow& window, vector<Sprite>& Tree) {

	Texture TREE;
	TREE.loadFromFile("tree.png");

	for (int i = 0;i < 10;i++) {
		Tree[i].setTexture(TREE);
	}

	Tree[0].setPosition(1000, 200);
	Tree[1].setPosition(1100, 300);


	for (int i = 0;i < 2;i++) {
		window.draw(Tree[i]);
	}



}

void Set_obstacle::set_stone(RenderWindow& window, vector<Sprite>& Stone) {
	Texture STONE;


	STONE.loadFromFile("stone.png");

	for (int i = 0; i < 4; i++) {
		Stone[i].setTexture(STONE);
	}



	Stone[0].setPosition(200, 200);
	Stone[1].setPosition(300, 300);
	Stone[2].setPosition(400, 400);
	Stone[3].setPosition(300, 700);


	for (int i = 0;i < 4;i++) {
		window.draw(Stone[i]);
	}
}

