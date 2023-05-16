#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;

class Set_obstacle{

public:
	Set_obstacle(int num);
	int obstacle_num;
	
	void set_tree(RenderWindow& window, vector<Sprite>& Tree);

	void set_water(RenderWindow& window, vector<Sprite>& Water);

	void set_stone(RenderWindow& window, vector<Sprite>& Stone);

	void set_bush(RenderWindow& window, vector<Sprite>& Bush);

	void set_redzone(RenderWindow& window, vector<Sprite>& Redzone);



};