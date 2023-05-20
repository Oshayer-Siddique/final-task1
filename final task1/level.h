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
using namespace sf;
#include "mainmenu.h"
int level(Sprite& backmenu)
{
	int x = -1;
	MainMenu LevelMenu(1800, 1000);
	RenderWindow levels(VideoMode(1800, 1000), "Levels");


	while (levels.isOpen())
	{
		Event levelevent;
		while (levels.pollEvent(levelevent))
		{
			if (levelevent.type == Event::Closed)
				levels.close();

			if (levelevent.type == Event::KeyReleased)
			{

				if (levelevent.key.code == Keyboard::Up)
				{


					if (x - 1 >= -1)
					{
						LevelMenu.mainMenu[x + 4].setFillColor(Color::Color(255, 222, 173));
						x--;
						if (x == -1)
						{
							x = 3;
						}
						LevelMenu.mainMenu[x + 4].setFillColor(Color::Color(178, 34, 34));
					}

					break;
				}

				if (levelevent.key.code == Keyboard::Down)
				{


					if (x + 1 <= 4)
					{
						LevelMenu.mainMenu[x + 4].setFillColor(Color::Color(255, 222, 173));
						x++;
						if (x == 4)
						{
							x = 0;
						}
						LevelMenu.mainMenu[x + 4].setFillColor(Color::Color(178, 34, 34));
					}

					break;
				}

				if (levelevent.key.code == Keyboard::Return)
				{
					return x;
				}
			}
		}



		levels.draw(backmenu);
		LevelMenu.drawlevel(levels);

		levels.display();

	}
}

