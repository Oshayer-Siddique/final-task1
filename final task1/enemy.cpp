#include "Enemy.h"
#include "Hero.h"

Enemy::Enemy(Texture* texture, Vector2u imageCount, float switchTime, float speed) :
	enemy_animation(texture,imageCount,switchTime)

{
	this->speed = speed;
	row = 0;
	enemyBody.setTexture(*texture);
	enemyBody.setPosition(1000, 200);

}

void Enemy::Update_enemy_movement(Texture& texture, float deltaTime, Sprite& Target) {

	float x = Target.getPosition().x;
	float y = Target.getPosition().y;

	float u = enemyBody.getPosition().x;
	float v = enemyBody.getPosition().y;

	if (x > u) {
		enemy_animation.Update(1, deltaTime);

	}
	else  if (x < u) {
		enemy_animation.Update(3,deltaTime);
	}





	cout << x << " " << y << " " << u << " " << v << endl;



	

	float enemyspeed = 70;


	Vector2f enemyVelocity(0, 0);
	 

	enemyVelocity = Target.getPosition() - enemyBody.getPosition();

	
	length = sqrt(enemyVelocity.x * enemyVelocity.x + enemyVelocity.y * enemyVelocity.y);
	enemyVelocity = enemyVelocity / length;

	enemyVelocity = enemyVelocity * enemyspeed;

	enemyBody.move(enemyVelocity*deltaTime);

	


	enemyBody.setTextureRect(enemy_animation.uvRect);

	

}


void Enemy::Draw(RenderWindow& window) {
	window.draw(enemyBody);
}