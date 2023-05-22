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
	void set_stone(RenderWindow& window, vector<Sprite>& stone, Texture& stonetex, Texture& stonerevtex);

	void set_water(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex);
	void set_borber(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex);
	void set_borderhori(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex);
	void set_door(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex);

	void set_chest(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex);

	void set_openchest(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex);
	void set_stonetwo(RenderWindow& window, vector<Sprite>& stone, Texture& stone2tex, Texture& stonerev2tex);
	void set_stonethree(RenderWindow& window, vector<Sprite>& stone, Texture& stone3tex, Texture& stonerev3tex);




	void set_stone2(RenderWindow& window, vector<Sprite>& stone, Texture& stonetex, Texture& stonerevtex);

	void set_water2(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex);
	void set_borber2(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex);
	void set_borderhori2(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex);
	void set_door2(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex);

	void set_chest2(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex);

	void set_stonetwo2(RenderWindow& window, vector<Sprite>& stone, Texture& stone2tex, Texture& stonerev2tex);
	void set_stonethree2(RenderWindow& window, vector<Sprite>& stone, Texture& stone3tex, Texture& stonerev3tex);


	void set_openchest2(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex);






	void set_stone3(RenderWindow& window, vector<Sprite>& stone, Texture& stonetex, Texture& stonerevtex);

	void set_water3(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex);
	void set_borber3(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex);
	void set_borderhori3(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex);
	void set_door3(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex);

	void set_chest3(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex);

	void set_stonetwo3(RenderWindow& window, vector<Sprite>& stone, Texture& stone2tex, Texture& stonerev2tex);
	void set_stonethree3(RenderWindow& window, vector<Sprite>& stone, Texture& stone3tex, Texture& stonerev3tex);


	void set_openchest3(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex);



	void set_stone4(RenderWindow& window, vector<Sprite>& stone, Texture& stonetex, Texture& stonerevtex);

	void set_water4(RenderWindow& window, vector<Sprite>& S_WATER, Texture& watertex);
	void set_borber4(RenderWindow& window, vector<Sprite>& S_BORDER, Texture& bordertex);
	void set_borderhori4(RenderWindow& window, vector<Sprite>& S_BORDERHORI, Texture& borderhoritex);
	void set_door4(RenderWindow& window, vector<Sprite>& S_DOOR, Texture& doortex, Texture& doorrevtex);

	void set_chest4(RenderWindow& window, vector<Sprite>& S_CHEST, Texture& chesttex);

	void set_stonetwo4(RenderWindow& window, vector<Sprite>& stone, Texture& stone2tex, Texture& stonerev2tex);
	void set_stonethree4(RenderWindow& window, vector<Sprite>& stone, Texture& stone3tex, Texture& stonerev3tex);


	void set_openchest4(RenderWindow& window, vector<Sprite>& S_OPENCHEST, Texture& openchesttex);
};
