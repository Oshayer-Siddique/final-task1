#pragma once
#pragma once


#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;
using namespace sf;
#define menufunctions 10
class MainMenu
{
public:
	void draw(RenderWindow& window);
	void MoveUp();
	void MoveDown();
	void levelMoveUp();
	void levelMoveDown();
	void drawlevel(RenderWindow& levels);
	int selectmenu(MainMenu mainmenu, Sprite& backmenu);
	Text mainMenu[menufunctions];
	void mousePressed(RenderWindow& window);

	   

	int MainMenuPressed() {
		return MainMenuSelected;
	}

	int mousepress() {
		return mouseselected;
	}

	MainMenu(float menuwidth, float menuheight);

	~MainMenu();

private:
	int MainMenuSelected;
	int levelmenuSelected;
	Font font;
	int mouseselected;

};

