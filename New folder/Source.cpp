#include "map.h"
#include "mainmenu.h"
#include "level.h"
#include "level1.h"
#include "level2.h"
#include  "level3.h"
#include  "level4.h"

int main()
{
	float width = 1800;
	float height = 1000;
	int l=0;
	Font fnt;
	fnt.loadFromFile("C:/Users/Asus/Documents/MODUS/map/rockb.ttf");
	Text txt[4];
	
	Texture tex, texmenu,
		cretex,
		background,
		background2,
		background3,
		background4,
		stonetex,
		stonerevtex,
		stone2tex,
		stone2revtex,
		stone3tex,
		stone3revtex,
		watertex,
		water2tex,
		bordertex,
		borderhoritex,
		doortex,
		doorrevtex,
		opendoortex,
		opendoorrevtex,
		chesttex,
		openchesttex,
		giftex,
		torchtex,
		torch2tex,
		torch3tex,
		torch4tex,
		fireanime,
		fire2anime,
		cointex;
	Sprite backg,back2g,back3g,back4g, backmenu, crespr;

	if (!stonetex.loadFromFile("block.png")) {}
	if (!stonerevtex.loadFromFile("blockrev.png")) {}
	if (!stone2tex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/block2.png")) {}
	if (!stone2revtex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/block2hori.png")) {}
	if (!stone3tex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/block3.png")) {}
	if (!stone3revtex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/block3hori.png")) {}
	

	if (!watertex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/lava.png")) {}
	if (!bordertex.loadFromFile("side.png")) {}
	if (!borderhoritex.loadFromFile("sidehori.png")) {}
	if (!opendoortex.loadFromFile("opendoor.png")) {}
	if (!opendoorrevtex.loadFromFile("opendoorrev.png")) {}
	if (!doortex.loadFromFile("opendoor.png")) {}
	if (!doorrevtex.loadFromFile("doorclosedrev.png")) {}
	if (!chesttex.loadFromFile("chest2.png")) {}
	if (!openchesttex.loadFromFile("chest1.png")) {}
	if (!torchtex.loadFromFile("Torch_Sheet.png")) {}
	if (!torch2tex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/Torch_Sheet_Green.png")) {}
	if (!torch3tex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/TorchType4.png")) {}
	if (!torch4tex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/TorchLevel4.png")) {}


	if (!fireanime.loadFromFile("C:/Users/Asus/Documents/MODUS/map/fireanime.png")) {}
	if (!fire2anime.loadFromFile("C:/Users/Asus/Documents/MODUS/map/fireanime2.png")) {}
	if (!cointex.loadFromFile("coin.png")) {}



	MainMenu mainmenu(1800, 1000);
	if (!texmenu.loadFromFile("menuback.jpg")) {}
	backmenu.setTexture(texmenu);

	if (!background.loadFromFile("background1.png")) {}
	backg.setTexture(background);

	if (cretex.loadFromFile("C:/Users/Asus/Documents/MODUS/map/creback.jpg")) {}
	crespr.setTexture(cretex);

	if (!background2.loadFromFile("C:/Users/Asus/Documents/MODUS/map/background2.png")) {}
	back2g.setTexture(background2);

	if (!background3.loadFromFile("C:/Users/Asus/Documents/MODUS/map/background3.png")) {}
	back3g.setTexture(background3);

	if (!background4.loadFromFile("C:/Users/Asus/Documents/MODUS/map/background4.jpg")) {}
	back4g.setTexture(background4);


	Clock clock;


	//GameWorld gameWorld = GameWorld();

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
			mainmenu.mousePressed(menu);
				
			if (menuevent.type == Event::KeyReleased|| Mouse::isButtonPressed(Mouse::Left))
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
				
				/*if (1)
				{
					cout<<"         "<<y<<"            ";
				}*/

				if (menuevent.key.code == Keyboard::Return|| Mouse::isButtonPressed(Mouse::Left))
				{
					
					int x = mainmenu.MainMenuPressed();
						int y = mainmenu.mousepress();
				
					
					cout << "    " << y << "    ";
					if (x == 0||y==0)
					{
						
						l = level1(backg
							,stonetex
							,stonerevtex
							,stone2tex
							,stone2revtex
							,stone3tex
							,stone3revtex
							,watertex
							,bordertex
							,borderhoritex
							,opendoortex
							,opendoorrevtex
							,doortex
							,doorrevtex
							,chesttex
							,openchesttex
						,torchtex,fireanime,	
							cointex
							);

					}

					if (x == 1 || y == 1||l==1)
					{
						int p=0;
						menu.close();
						l = level(backmenu,mainmenu);
						
						if(l==0){
							p=level1(backg
								, stonetex
								, stonerevtex
								, stone2tex
								, stone2revtex
								, stone3tex
								, stone3revtex
								, watertex
								, bordertex
								, borderhoritex
								, opendoortex
								, opendoorrevtex
								, doortex
								, doorrevtex
								, chesttex
								, openchesttex
								, torchtex, fireanime
							,cointex);
						}
						if (l==1)
						{
							p=level2(back2g
								, stonetex
								, stonerevtex
								, stone2tex
								, stone2revtex
								, stone3tex
								, stone3revtex
								, watertex
								, bordertex
								, borderhoritex
								, opendoortex
								, opendoorrevtex
								, doortex
								, doorrevtex
								, chesttex
								, openchesttex
								, torch2tex, fire2anime
								, cointex);

						}
						if (l == 2)
						{
							p= level3(back3g
								, stonetex
								, stonerevtex,
								stone2tex
								, stone2revtex
								, stone3tex
								, stone3revtex
								, watertex
								, bordertex
								, borderhoritex
								, opendoortex
								, opendoorrevtex
								, doortex
								, doorrevtex
								, chesttex
								, openchesttex
								, torch3tex, fire2anime
								, cointex);



						}
						if (l ==3)
						{
							p = level4(back4g
								, stonetex
								, stonerevtex, stone2tex
								, stone2revtex
								, stone3tex
								, stone3revtex
								, watertex
								, bordertex
								, borderhoritex
								, opendoortex
								, opendoorrevtex
								, doortex
								, doorrevtex
								, chesttex
								, openchesttex
								, torch4tex, fire2anime
								, cointex);



						}
						/*if (p == 3)
						{
							x = 2;
						}*/
						

					}

					if (x == 2 || y == 2||l==4)
					{

						RenderWindow credit(VideoMode(width, height), "Credits");
						txt[0].setFont(fnt);
						txt[0].setFillColor(Color::Color(255, 222, 173));
						txt[0].setString("Developers");
						txt[0].setCharacterSize(35);
						txt[0].setPosition(820, 350);
						
						
						
						txt[1].setFont(fnt);
						txt[1].setFillColor(Color::Color(255, 222, 173));
						txt[1].setString("Mosharrifur Rahman Ratul");
						txt[1].setCharacterSize(40);
						txt[1].setPosition(685, 650);


						txt[2].setFont(fnt);
						txt[2].setFillColor(Color::Color(255, 222, 173));
						txt[2].setString("Oshayer Siddique");
						txt[2].setCharacterSize(40);
						txt[2].setPosition(750, 450);



						txt[3].setFont(fnt);
						txt[3].setFillColor(Color::Color(255, 222, 173));
						txt[3].setString("Momrez Neemeri Mohsin");
						txt[3].setCharacterSize(40);
						txt[3].setPosition(685, 550);



						crespr.setPosition(500, 280);
						
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
								for (int i = 0;i < 4;i++)
								{
									credit.draw(txt[i]);
								}
								credit.display();


							}

					}

					if (x == 3 || y == 3)
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