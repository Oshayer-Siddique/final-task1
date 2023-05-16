#pragma once
#include<SFML/Graphics.hpp>
using namespace std;
using namespace sf;




class Background {
public:
	Background(float x, float y);
	Background();

	//vector<Sprite>stone;

	void set_background(RenderWindow& window);

	void set_obstacle_stone(RenderWindow& window,vector<Sprite>&stone);

	//void set_prize(RenderWindow& window,vector<Sprite>&prize);
private:
	Sprite sprite;

};