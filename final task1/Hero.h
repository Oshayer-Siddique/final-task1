#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
using namespace std;
using namespace sf;

class Hero {
public:
	Hero(Texture* texture, Vector2u imageCount, float switchTime);

	void Update_movement(Texture& texture,float deltaTime,  float speed);

	void Update_special_movement(Texture& texture, float deltaTime, float speed);



	

	void prize_hijack(RenderWindow& window, Sprite& c_prize);

	void Draw(RenderWindow& window);

	int Health(Sprite& A , Sprite& B);
	Sprite body;

private:
	Time elapsed = milliseconds(0);
	Time interval = seconds(15);
	Clock clk;
	bool powerGenerate = false;
	Animation animation;
	int row;

	Vector2f direction;
	float distance;




	

	float speed;




};