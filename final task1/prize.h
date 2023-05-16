#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;

class prize {
public:
	prize(float x, float y,Sprite& c_prize);
	void set_prize(RenderWindow& window,Sprite& c_prize);

	//void handle_prize(RenderWindow& window, Sprite& c_prize);


};