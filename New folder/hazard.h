#pragma once
#include"animation.h"
#include"hazard.h"

#include<SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
#include<iostream>
#include<vector>
#include<ctime>
#include<string>
#include<sstream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
using namespace sf;

using namespace std;


class Hazard {
public:
	Hazard(Texture* texture, Vector2u imageCount, float switchTime, float speed, float x, float y);

	void Update_hazard(Texture& texture, float deltaTime);

	void update_hazard_unbalanced_pic(RenderWindow& window, Sprite& A1, vector<Texture>& E1);


	void Draw(RenderWindow& window);

	Sprite hazardBody;


private:
	Animation hazard_animation;

	int row;

	float speed;

	Clock clk;
	float framerate = 1;
	int currentframe = 0;
	Time elapsedTime = clk.restart();

};
