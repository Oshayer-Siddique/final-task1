#pragma once
#include "map.h"
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

			if (levelevent.type == Event::KeyReleased|| Mouse::isButtonPressed(Mouse::Left)
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
			
				if (menu1.contains(mousePos))
				{
					LevelMenu.mainMenu[4].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
					{
						return 0;
					}
				}
				else
				{
					LevelMenu.mainMenu[4].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu2.contains(mousePos))
				{

					LevelMenu.mainMenu[5].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
					{
						return 1;
					}

				}
				else
				{
					LevelMenu.mainMenu[5].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu3.contains(mousePos))
				{
					LevelMenu.mainMenu[6].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
						return 2;

				}
				else
				{
					LevelMenu.mainMenu[6].setFillColor(Color::Color(255, 222, 173));
				}
				if (menu4.contains(mousePos))
				{
					LevelMenu.mainMenu[7].setFillColor(Color::Color(178, 34, 34));
					if (Mouse::isButtonPressed(Mouse::Left))
						return 3;

					
				}
				else
				{
					LevelMenu.mainMenu[7].setFillColor(Color::Color(255, 222, 173));
				}
			
		}



		levels.draw(backmenu);
		LevelMenu.drawlevel(levels);

		levels.display();

	}
}
	