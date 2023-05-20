#include "prize.h"

prize::prize(float x, float y,Sprite& c_prize) {
	c_prize.setPosition(x, y);
}

void prize::set_prize(RenderWindow& window,Sprite& c_prize) {
	Texture prizes;
	prizes.loadFromFile("crown.png");
	c_prize.setTexture(prizes);
	window.draw(c_prize);

}


int prize::get_prize_position(Sprite& c_prize) {

	return c_prize.getPosition().x;


}