#pragma once


#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;


class Material {

public:
	Material(Texture& T);


	void set_material(RenderWindow& window, Sprite& A, Texture& T);


	

};