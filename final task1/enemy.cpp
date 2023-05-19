#include "enemy.h"

Enemy::Enemy(Sprite& A1) {
	
}

void Enemy::enemy_animation(RenderWindow& window, Sprite& A1, vector<Texture>& E1) {

	A1.setTexture(E1[0]);

	A1.setPosition(800, 800);


	elapsedTime += clk.restart();
	if (elapsedTime.asSeconds() >= framerate) {
		currentframe = (currentframe + 1) % 4;
		A1.setTexture(E1[currentframe]);
		clk.restart();
	}

	window.draw(A1);


}