#include "player.h"
#include "background.h"


Player::Player(float x, float y) {
	sprite.setPosition(x,y);
	
}


void Player::HandleInput(RenderWindow& window,float velocityX) {

	Texture walk_right;
	walk_right.loadFromFile("walk_right.png");

	Texture walk_left;
	walk_left.loadFromFile("walk_left.png");

	Texture walk_up;
	walk_up.loadFromFile("walk_up.png");

	Texture walk_down;
	walk_down.loadFromFile("walk_down.png");

	//velocityX = 8;

	if (Keyboard::isKeyPressed(Keyboard::D)) {
		if (Keyboard::isKeyPressed(Keyboard::LShift)) {
			sprite.setTexture(walk_right);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 6;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(2* velocityX, 0);


		}
		else {


			sprite.setTexture(walk_right);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 9;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(velocityX, 0);
		}


	}
	if (Keyboard::isKeyPressed(Keyboard::A)) {
		if (Keyboard::isKeyPressed(Keyboard::LShift)) {
			sprite.setTexture(walk_left);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 6;
			x_texture *= 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(-2* velocityX, 0);
		}
		else {
			sprite.setTexture(walk_left);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 9;
			x_texture *= 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(-velocityX, 0);

		}
	}

	if (Keyboard::isKeyPressed(Keyboard::W)) {
		if (Keyboard::isKeyPressed(Keyboard::LShift)) {
			sprite.setTexture(walk_up);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().y / 15 % 9;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(0, -2* velocityX);

		}
		else {


			sprite.setTexture(walk_up);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().y / 15 % 9;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(0, -velocityX);
		}


	}

	if (Keyboard::isKeyPressed(Keyboard::S)) {
		if (Keyboard::isKeyPressed(Keyboard::LShift)) {
			sprite.setTexture(walk_down);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().y / 15 % 6;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(0, 2* velocityX);



		}
		else {


			sprite.setTexture(walk_down);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().y / 15 % 8;
			x_texture = x_texture * 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(0, velocityX);
		}


	}
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		if (Keyboard::isKeyPressed(Keyboard::D)) {
			sprite.setTexture(walk_right);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 8;
			x_texture *= 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(velocityX, 0);
		}
	}

	if (Keyboard::isKeyPressed(Keyboard::D)) {
		if (Keyboard::isKeyPressed(Keyboard::S)) {
			sprite.setTexture(walk_right);
			int x_texture = 0;
			x_texture = (int)sprite.getPosition().x / 15 % 8;
			x_texture *= 150;
			sprite.setTextureRect(IntRect(x_texture, 0, 150, 150));
			sprite.move(-velocityX, 0);
		}
	}




	View view(FloatRect(0, 0, 1800, 1000));
	window.setView(view);
	view.setCenter(sprite.getPosition());
	window.setView(view);

	window.draw(sprite);

	
}

void Player::inThefield(void) {
	float u = sprite.getPosition().x;
	float v = sprite.getPosition().y;

	
	//cout << u << " " << v << endl;
	
	if (u > 1700) {
		sprite.setPosition(1700, v);
	}
	else if (u < -22) {
		sprite.setPosition(-22, v);
	}
	else if (v > 840) {
		sprite.setPosition(u,840);
	}
	else if (v < -16) {
		sprite.setPosition(u,-16);
	}
}




void Player::prize_hijack(RenderWindow& window, Sprite& c_prize) {
	FloatRect rect1 = sprite.getGlobalBounds();
	FloatRect rect2 = c_prize.getGlobalBounds();

	if (rect1.intersects(rect2)) {
		if (Keyboard::isKeyPressed(Keyboard::H)) {
			c_prize.setPosition(-1500,-1500);
		}

	}
	else {
		if (Keyboard::isKeyPressed(Keyboard::R)) {
			c_prize.setPosition(sprite.getPosition().x+50,sprite.getPosition().y+50);
		}
	}

}









