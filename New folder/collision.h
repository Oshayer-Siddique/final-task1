#pragma once
#include"map.h"
#include<SFML/Graphics.hpp>
#include<iostream>


using namespace std;
using namespace sf;

class Collision
{
public:
	Collision();
	Sprite sprite;
	void collision_chk(Sprite& A, vector<Sprite>& B);




};

