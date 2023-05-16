#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include "player.h"

using namespace std;
using namespace sf;

class Collision
{
public:
	Collision(Sprite& A);
	Sprite sprite;
	void collision_chk(Sprite& A, vector<Sprite>& B);




};

