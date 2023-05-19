#pragma once

#include<SFML/Graphics.hpp>
#include<iostream>


using namespace std;
using namespace sf;


class Enemy {
public:
	Enemy(Sprite& A1);
	void enemy_animation(RenderWindow& window, Sprite& A1, vector<Texture>& E1);
private:

	Clock clk;
	float framerate = 0.1f;//2 frames per second
	int currentframe = 0;
	Time elapsedTime = clk.restart();

};