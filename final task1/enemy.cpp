#include "Enemy.h"
#include "Hero.h"

Enemy::Enemy(Texture* texture, Vector2u imageCount, float switchTime, float speed,float x, float y) :
	enemy_animation(texture,imageCount,switchTime)

{
	this->speed = speed;
	row = 0;
	enemyBody.setTexture(*texture);
	enemyBody.setPosition(x,y);



	border.setFillColor(sf::Color::Transparent);
	border.setOutlineThickness(2.0f);
	border.setOutlineColor(sf::Color::Red);

}

void Enemy::Update_enemy_movement(Texture& texture, float deltaTime, Sprite& Target) {


	border.setSize(Vector2f(enemyBody.getGlobalBounds().width,enemyBody.getGlobalBounds().height));
	border.setPosition(enemyBody.getPosition().x, enemyBody.getPosition().y);

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



		


		float enemyspeed = 70;


		Vector2f enemyVelocity(0, 0);


		enemyVelocity = Target.getPosition() - enemyBody.getPosition();


		length = sqrt(enemyVelocity.x * enemyVelocity.x + enemyVelocity.y * enemyVelocity.y);
		enemyVelocity = enemyVelocity / length;

		enemyVelocity = enemyVelocity * enemyspeed;

		enemyBody.move(enemyVelocity * deltaTime);




		


	

	enemyBody.setTextureRect(enemy_animation.uvRect);




	//cout << x << " " << y << " " << u << " " << v << endl;


	

}


void Enemy::Update_ground_enemy_movement(Texture& texture, float deltaTime, Sprite& Target,float range) {

	border.setSize(Vector2f(enemyBody.getGlobalBounds().width, enemyBody.getGlobalBounds().height));
	border.setPosition(enemyBody.getPosition().x, enemyBody.getPosition().y);

	float x = Target.getPosition().x;
	float y = Target.getPosition().y;

	float u = enemyBody.getPosition().x;
	float v = enemyBody.getPosition().y;

	if (x > u) {
		enemy_animation.Update(3, deltaTime);

	}
	else  if (x < u) {
		enemy_animation.Update(1, deltaTime);
	}
	else if (y < v) {
		enemy_animation.Update(0,deltaTime);
	}
	else if (y > v) {
		enemy_animation.Update(2,deltaTime);
	}


	float distance = sqrt((x - u) * (x - u) + (y - v)*(y - v));

	if (distance < range) {


		float enemyspeed = 70;


		Vector2f enemyVelocity(0, 0);


		enemyVelocity = Target.getPosition() - enemyBody.getPosition();


		length = sqrt(enemyVelocity.x * enemyVelocity.x + enemyVelocity.y * enemyVelocity.y);
		enemyVelocity = enemyVelocity / length;

		enemyVelocity = enemyVelocity * enemyspeed;

		enemyBody.move(enemyVelocity * deltaTime);


	}



	enemyBody.setTextureRect(enemy_animation.uvRect);

}

void Enemy::Draw(RenderWindow& window) {
	window.draw(enemyBody);
	//window.draw(border);
}