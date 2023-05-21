#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
#include<iostream>
#include<vector>
using namespace std;
using namespace sf;

class Hero {
public:
	Hero(Texture* texture, Vector2u imageCount, float switchTime,float x, float y);

	void Update_movement(Texture& texture,float deltaTime,  float speed);

	void Update_Clock(Texture& texture, float deltaTime, float speed);

	void special_movement(Texture& texture, float deltaTime, float speed);



	



	void prize_hijack(RenderWindow& window, Sprite& c_prize);

	void Draw(RenderWindow& window);

	//int Health(Sprite& A , Sprite& B);
	Sprite body;

	int Total_HP = 5000;
	int current_hp = 10;

	RectangleShape border;

private:
	Time elapsed = milliseconds(0);
	Time interval = seconds(3);
	Clock clk;
	bool powerGenerate = false;
	Animation animation;
	int row;

	Vector2f direction;
	float distance;

	float speed;




};