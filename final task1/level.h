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
int level(Sprite& backmenu, MainMenu mainmenu)
{
	int x = -1;
	MainMenu LevelMenu(1800, 1080);

	RenderWindow levels(VideoMode(1800, 1000), "Levels");


	while (levels.isOpen())
	{
		Event levelevent;

		Vector2f mousePos = levels.mapPixelToCoords(Mouse::getPosition(levels));
		FloatRect menu1 = mainmenu.mainMenu[4].getGlobalBounds();
		FloatRect menu2 = mainmenu.mainMenu[5].getGlobalBounds();
		FloatRect menu3 = mainmenu.mainMenu[6].getGlobalBounds();
		FloatRect menu4 = mainmenu.mainMenu[7].getGlobalBounds();
		cout << menu1.left;
		while (levels.pollEvent(levelevent))
		{
			if (levelevent.type == Event::Closed)
				levels.close();

			if (levelevent.type == Event::KeyReleased || Mouse::isButtonPressed(Mouse::Left)
				)
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
			if (Mouse::isButtonPressed(Mouse::Left))
			{
				if (menu1.contains(mousePos))
				{
					//Color current = mainMenu[0].getFillColor();
					mainmenu.mainMenu[0].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
					{
						return 0;
					}
					//if (current != Color::Red)
					//	menusound.play();
				}
				else
				{
					mainmenu.mainMenu[0].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu2.contains(mousePos))
				{
					//Color current = mainMenu[0].getFillColor();
					mainmenu.mainMenu[1].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
					{
						return 1;
					}
					//if (current != Color::Red)
					//	menusound.play();
				}
				else
				{
					mainmenu.mainMenu[1].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu3.contains(mousePos))
				{
					//Color current = mainMenu[1].getFillColor();
					mainmenu.mainMenu[2].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
						return 2;

				}
				else
				{
					mainmenu.mainMenu[2].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu4.contains(mousePos))
				{
					//Color current = mainmenu.mainMenu[2].getFillColor();
					mainmenu.mainMenu[3].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
						return 3;

					//if (current != Color::Red)
					//	menusound.play();
				}
				else
				{
					mainmenu.mainMenu[3].setFillColor(Color::Color(255, 222, 173));
				}
			}
		}



		levels.draw(backmenu);
		LevelMenu.drawlevel(levels);

		levels.display();

	}
}

