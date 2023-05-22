#pragma once

#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
class Enemy
{
public:
	Enemy(Texture* texture, Vector2u imageCount, float switchTime, float speed,float x,float y);

	void Update_enemy_movement(Texture& texture, float deltaTime,Sprite& Target);

	void Update_ground_enemy_movement(Texture& texture, float deltaTime, Sprite& Target,float range);


	void Draw(RenderWindow& window);

	Sprite enemyBody;


private:
	Animation enemy_animation;

	int row;

	float speed;
	float length;
	float enemyspeed;

	Vector2f enemyVelocity;
	Vector2f normalize;

	RectangleShape border;


};

