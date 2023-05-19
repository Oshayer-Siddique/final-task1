#pragma once

#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
class Enemy
{
public:
	Enemy(Texture* texture, Vector2u imageCount, float sitchTime, float speed);

	void Update_enemy_movement(Texture& texture, float deltaTime,Sprite& Target);


	void Draw(RenderWindow& window);

	Sprite enemyBody;


private:
	Animation enemy_animation;

	int row;

	float speed;
	float length;

	Vector2f enemyVelocity;
	Vector2f normalize;



};

