#pragma once

#include<SFML/Graphics.hpp>
#include<iostream>


using namespace std;
using namespace sf;


class Hazard {
public:
	Hazard(Sprite& A1,float x, float y);
	void hazard_animation(RenderWindow& window, Sprite& A1, vector<Texture>& E1);
private:
	
	Clock clk;
	float framerate = 1;
	int currentframe = 0;
	Time elapsedTime = clk.restart();

};