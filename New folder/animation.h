#pragma once

#include<SFML/Graphics.hpp>
#include<iostream>

#include"map.h"


using namespace std;
using namespace sf;


class Animation
{
public:
	Animation(Texture* texture, Vector2u imageCount, float switchTime);
	void Update(int row, float deltaTome);





public:
	IntRect uvRect;

private:
	Vector2u imageCount;
	Vector2u currentImage;
	float totalTime;
	float switchTime;




};


