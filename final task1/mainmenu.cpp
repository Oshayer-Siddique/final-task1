#include"mainmenu.h"
MainMenu::MainMenu(float menuwidth, float menuheight)
{
	if (!font.loadFromFile("Fantasy kids Regular.otf"));
		cout << "font didn't load";
	//play
	mainMenu[0].setFont(font);
	mainMenu[0].setFillColor(Color::White);
	mainMenu[0].setString("NewGame");
	mainMenu[0].setCharacterSize(50);
	mainMenu[0].setPosition(0, 0);

	//play levels

	mainMenu[1].setFont(font);
	mainMenu[1].setFillColor(Color::White);
	mainMenu[1].setString("Levels");
	mainMenu[1].setCharacterSize(50);
	mainMenu[1].setPosition(0, 200);

	//credit

	mainMenu[2].setFont(font);
	mainMenu[2].setFillColor(Color::White);
	mainMenu[2].setString("Credit");
	mainMenu[2].setCharacterSize(50);
	mainMenu[2].setPosition(0, 400);

	//exit

	mainMenu[3].setFont(font);
	mainMenu[3].setFillColor(Color::White);
	mainMenu[3].setString("Exit");
	mainMenu[3].setCharacterSize(50);
	mainMenu[3].setPosition(0, 600);



	mainMenu[4].setFont(font);
	mainMenu[4].setFillColor(Color::White);
	mainMenu[4].setString("Level 1");
	mainMenu[4].setCharacterSize(50);
	mainMenu[4].setPosition(0, 0);


	mainMenu[5].setFont(font);
	mainMenu[5].setFillColor(Color::White);
	mainMenu[5].setString("Level 2");
	mainMenu[5].setCharacterSize(50);
	mainMenu[5].setPosition(0, 200);



	mainMenu[6].setFont(font);
	mainMenu[6].setFillColor(Color::White);
	mainMenu[6].setString("Level 3");
	mainMenu[6].setCharacterSize(50);
	mainMenu[6].setPosition(0, 400);



	mainMenu[7].setFont(font);
	mainMenu[7].setFillColor(Color::White);
	mainMenu[7].setString("Level 4");
	mainMenu[7].setCharacterSize(50);
	mainMenu[7].setPosition(0, 600);

	MainMenuSelected = -1;

}
MainMenu:: ~MainMenu()
{

}

//MainMenu::levelmenu()
//{
//
//}

void MainMenu::draw(RenderWindow& window)
{
	for (int i = 0;i < 4;i++)
	{
		window.draw(mainMenu[i]);
	}
}

void MainMenu::MoveUp()
{
	if (MainMenuSelected - 1 >= 0)
	{
		mainMenu[MainMenuSelected].setFillColor(Color::White);
		MainMenuSelected--;
		if (MainMenuSelected == -1)
		{
			MainMenuSelected = 4;
		}
		mainMenu[MainMenuSelected].setFillColor(Color::Blue);
	}
}

void MainMenu::MoveDown()
{
	if (MainMenuSelected + 1 <= menufunctions)
	{
		mainMenu[MainMenuSelected].setFillColor(Color::White);
		MainMenuSelected++;
		if (MainMenuSelected == 4)
		{
			MainMenuSelected = 0;
		}
		mainMenu[MainMenuSelected].setFillColor(Color::Blue);
	}

}



void MainMenu::drawlevel(RenderWindow& levels)
{


	for (int i = 4;i < 7;i++)
	{
		levels.draw(mainMenu[i]);
	}
}

int MainMenu::selectmenu(MainMenu mainmenu, Sprite& backmenu)
{

	//	MainMenu mainmenu(menu.getSize().x, menu.getSize().y);
	Event menuevent;
	RenderWindow menu(VideoMode(1800, 1000), "menu");
	while (menu.isOpen())
	{


		while (menu.pollEvent(menuevent))
		{
			if (menuevent.type == Event::Closed)
			{
				menu.close();
			}
			if (menuevent.type == Event::KeyReleased)
			{

				if (menuevent.key.code == Keyboard::Up)
				{


					mainmenu.MoveUp();

					break;
				}

				if (menuevent.key.code == Keyboard::Down)
				{
					mainmenu.MoveDown();

					break;
				}

				if (menuevent.key.code == Keyboard::Return)
				{
					int x = mainmenu.MainMenuPressed();
					if (x == 0)
					{

						/*RenderWindow window(VideoMode(1800, 1000), "Map");


						while (window.isOpen())
						{

							Event event;
							while (window.pollEvent(event))
							{
								if (event.type == Event::Closed)
									window.close();
							}

							window.clear();
							window.draw(backg);
							gameWorld.setuptiles();
							for (int i = 0;i < gameWorld.tiles.size();i++)
							{
								window.draw(gameWorld.tiles[i]->spr1);
							}


							window.display();


						}*/
						return 0;

					}

					if (x == 1)
					{
						MainMenu LevelMenu(1800, 1080);

						RenderWindow levels(VideoMode(1800, 1000), "Levels");
						levelmenuSelected = 0;

						while (levels.isOpen())
						{
							Event levelevent;
							while (levels.pollEvent(levelevent))
							{
								/*if (levelevent.type == Event::Closed)
									levels.close();

								if (levelevent.type == Event::KeyReleased)
								{

									if (levelevent.key.code == Keyboard::Up)
									{


										if (levelmenuSelected > 0)
										{

											mainMenu[levelmenuSelected + 4].setFillColor(Color::White);
											levelmenuSelected--;
											if (levelmenuSelected == -1)
											{
												levelmenuSelected = 4;
											}
											mainMenu[levelmenuSelected + 4].setFillColor(Color::Blue);
										}

										break;
									}

									if (menuevent.key.code == Keyboard::Down)
									{
										if (levelmenuSelected < 4)
										{

											mainMenu[levelmenuSelected + 4].setFillColor(Color::White);
											levelmenuSelected++;
											if (levelmenuSelected == 4)
											{
												levelmenuSelected = 0;
											}
											mainMenu[levelmenuSelected + 4].setFillColor(Color::Blue);
										}

										break;
									}

									if (menuevent.key.code == Keyboard::Return)
									{
									}*/

									//levels.draw(levelMenu[0]);
							}
							levels.draw(backmenu);
							mainmenu.drawlevel(levels);

							levels.display();



							menu.clear();
							menu.close();
							return 1;
						}

						if (x == 2)
						{

							/*RenderWindow credit(VideoMode(1800, 1000), "Levels");

								while (credit.isOpen())
								{
									Event creditevent;
									while (credit.pollEvent(creditevent))
									{
										if (creditevent.type == Event::Closed)
											credit.close();
									}

									credit.clear();
									credit.draw(crespr);


									credit.display();


								}*/
							return 2;

						}

						if (x == 3)
						{
							menu.clear();
							menu.close();

						}







					}
				}
			}

			menu.draw(backmenu);
			mainmenu.draw(menu);
			menu.display();

		}




	}
}
