#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include "background.h"
#include "prize.h"
using namespace std;
using namespace sf;
class Player{
public:
	Sprite sprite;
	Player(float x, float y);
	
	
	void HandleInput(RenderWindow& window,float velocityX);


	void inThefield(void);


	void stone_collsion(vector<Sprite>& stone);

	void prize_hijack(RenderWindow& window, Sprite& c_prize);




	



	
private:
	
	Sprite prize;
	float velocityX = 8;
	float velocityY = 0;
	
	Vector2f position, velocity, acceleration;

};