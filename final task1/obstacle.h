#pragma once
#include<iostream>
#include<vector>
#include<ctime>
#include<string>
#include<sstream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;

class Set_obstacle {

public:
	Set_obstacle(int num);
	int obstacle_num;
	void set_stone(RenderWindow& window, vector<Sprite>& stone, Texture& stonetex);

	void set_water(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex);
	void set_borber(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex);
	void set_borderhori(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex);
	void set_door(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex);

	void set_chest(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex);

	void set_openchest(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex);

};