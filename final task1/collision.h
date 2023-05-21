#pragma once
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

	int collision_chk_S(Sprite& X, Sprite& Y);

	//void collision_chk_rectangle(RectangleShape& U, vector<Sprite>& V);

	





};

