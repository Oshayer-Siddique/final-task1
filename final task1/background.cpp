#include "background.h"



Background::Background(float x, float y) {
	sprite.setPosition(x, y);
}

void Background::set_background(RenderWindow& window) {

	Texture Background;
	Background.loadFromFile("background.png");
	sprite.setTexture(Background);
	window.draw(sprite);


};