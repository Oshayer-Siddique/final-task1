#include "background.h"



Background::Background(float x, float y) {
	sprite.setPosition(x, y);
}

void Background::set_background(RenderWindow& window) {

	Texture Background;
	Background.loadFromFile("background.png");
	sprite.setTexture(Background);
	window.draw(sprite);


}

void Background::set_obstacle_stone(RenderWindow& window,vector<Sprite>&stone) {

	Texture stones;
	

	stones.loadFromFile("stone.png");
	
	for (int i = 0; i < 4; i++) {
		stone[i].setTexture(stones);
	}



	stone[0].setPosition(200, 200);
	stone[1].setPosition(300, 300);
	stone[2].setPosition(400, 400);
	stone[3].setPosition(300, 700);


	for (int i = 0;i < 4;i++) {
		window.draw(stone[i]);
	}






}

