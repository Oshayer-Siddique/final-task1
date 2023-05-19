#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
using namespace std;
using namespace sf;

class Hero {
public:
	Hero(Texture* texture, Vector2u imageCount, float sitchTime,float speed);

	void Update_movement(float deltaTime);

	void prize_hijack(RenderWindow& window, Sprite& c_prize);

	void Draw(RenderWindow& window);
	Sprite body;

private:
	
	Animation animation;
	int row;

	float speed;




};