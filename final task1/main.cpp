#include <SFML/Graphics.hpp>
#include<iostream>
#include<string>
#include "Hazard.h"
#include "prize.h"
#include "obstacle.h"
#include "collision.h"
#include "material.h"
#include "Hero.h"
#include "Enemy.h"
#include "mainmenu.h"
#include "SpellCast.h"
#include"level.h"
#include"level1.h"
#include"level2.h"
#include"level3.h"
#include<iostream>
#include<vector>
#include<ctime>
#include<string>
#include<sstream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include"level4.h"
using namespace sf;
using namespace std;

int main()
{

    

    float width = 1800;
    float height = 1000;
    int l,p;

    Font fnt;
    fnt.loadFromFile("F:/SFML Projects/final task1/New folder/rockb.ttf");
    Text txt[4];

    SoundBuffer introbuffer;
    introbuffer.loadFromFile("F:/SFML Projects/final task1/New folder/all.wav");
    Music intromusic;
    intromusic.openFromFile("F:/SFML Projects/final task1/New folder/all.wav");\
        intromusic.setLoop(true);
    intromusic.play();








    Texture tex, texmenu,
        cretex,
        background,
        background2,
        background3,
        background4,
        stonetex, stonerevtex,
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
        cointex,
        dragonTexture2,
        Wolftexture,
        dragontexture3,
        dragontexture4,
        monsterTexture,
        minioter;
        

    Sprite backg, back2g, back3g, back4g, backmenu, crespr,c_prize3,c_prize4,introspr;

    if (!stonetex.loadFromFile("F:/SFML Projects/final task1/New folder/block.png")) {}
    if (!stonerevtex.loadFromFile("F:/SFML Projects/final task1/New folder/blockrev.png")) {}
    if (!stone2tex.loadFromFile("F:/SFML Projects/final task1/New folder/block2.png")) {}
    if (!stone2revtex.loadFromFile("F:/SFML Projects/final task1/New folder/block2hori.png")) {}
    if (!stone3tex.loadFromFile("F:/SFML Projects/final task1/New folder/block3.png")) {}
    if (!stone3revtex.loadFromFile("F:/SFML Projects/final task1/New folder/block3hori.png")) {}


    if (!watertex.loadFromFile("F:/SFML Projects/final task1/New folder/lava.png")) {}
    if (!bordertex.loadFromFile("F:/SFML Projects/final task1/New folder/side.png")) {}
    if (!borderhoritex.loadFromFile("F:/SFML Projects/final task1/New folder/sidehori.png")) {}
    if (!opendoortex.loadFromFile("F:/SFML Projects/final task1/New folder/opendoor.png")) {}
    if (!opendoorrevtex.loadFromFile("F:/SFML Projects/final task1/New folder/opendoorrev.png")) {}
    if (!doortex.loadFromFile("F:/SFML Projects/final task1/New folder/opendoor.png")) {}
    if (!doorrevtex.loadFromFile("F:/SFML Projects/final task1/New folder/doorclosedrev.png")) {}
    if (!chesttex.loadFromFile("F:/SFML Projects/final task1/New folder/chest2.png")) {}
    if (!openchesttex.loadFromFile("F:/SFML Projects/final task1/New folder/chest1.png")) {}
    if (!torchtex.loadFromFile("F:/SFML Projects/final task1/New folder/Torch_Sheet.png")) {}
    if (!torch2tex.loadFromFile("F:/SFML Projects/final task1/New folder/Torch_Sheet_Green.png")) {}
    if (!torch3tex.loadFromFile("F:/SFML Projects/final task1/New folder/TorchType4.png")) {}
    if (!torch4tex.loadFromFile("F:/SFML Projects/final task1/New folder/TorchLevel4.png")) {}



    if (!fireanime.loadFromFile("F:/SFML Projects/final task1/New folder/fireanime.png")) {}
    if (!fire2anime.loadFromFile("F:/SFML Projects/final task1/New folder/green_fire.png")) {}
    if (!cointex.loadFromFile("F:/SFML Projects/final task1/New folder/MODOS.png")) {}
    introspr.setTexture(cointex);
    introspr.setPosition(610, 100);
    MainMenu mainmenu(1800, 1000);
    if (!texmenu.loadFromFile("menuback.jpg")) {}
    backmenu.setTexture(texmenu);

    if (!background.loadFromFile("background1.png")) {}
    backg.setTexture(background);

    if (cretex.loadFromFile("F:/SFML Projects/final task1/New folder/creditback.jpg")) {}
    crespr.setTexture(cretex);

    if (!background2.loadFromFile("F:/SFML Projects/final task1/New folder/background2.png")) {}
    back2g.setTexture(background2);
    if (!background3.loadFromFile("F:/SFML Projects/final task1/New folder/background3.png")) {}
    back3g.setTexture(background3);
    if (!background4.loadFromFile("F:/SFML Projects/final task1/New folder/background4.jpg")) {}
    back4g.setTexture(background4);


    Font font;




    /* -------------------------------------------------------------------------- */
    /*                                SETTING BACKGROUND                          */
    /* -------------------------------------------------------------------------- */
 /*   Texture platform;
    platform.loadFromFile("background.png");
    Sprite PLF;
    PLF.setTexture(platform);
    PLF.setPosition(0, 0);*/







    /* -------------------------------------------------------------------------- */
    /*                                LOADING TEXTURE                             */
    /* -------------------------------------------------------------------------- */

    //Texture T;
    //T.loadFromFile("sword.png");
    //Texture TREE;
    //TREE.loadFromFile("tree.png");
    //Texture STONE;
    //STONE.loadFromFile("stone.png");

    vector<Texture>dragon_frames(10);

    //for (int i = 0;i < 4;i++) {
    //    (dragon_frames[i].loadFromFile("dragon_forward" + to_string(i + 1) + ".png"));
    //        

    //}

    vector<Texture> fire_frames(10);
    for (int i = 0;i < 6;i++) {
        fire_frames[i].loadFromFile("fire" + to_string(i + 1) + ".png");
    }




    Texture heroTexture;
    heroTexture.loadFromFile("Hero.png");

    Texture dragonTexture;
    dragonTexture.loadFromFile("dragon.png");

    Texture firetexture;
    firetexture.loadFromFile("fire.png");

    Texture greenfire;
    greenfire.loadFromFile("greenfire.png");

    Texture spelltexture;
    spelltexture.loadFromFile("spellcast_red.png");

    Texture fireballTexture;
    fireballTexture.loadFromFile("fireball.png");

    Texture SkeletonTexture;
    SkeletonTexture.loadFromFile("Skeleton Movement.png");

    dragonTexture2.loadFromFile("DragonYellow.png");
    Wolftexture.loadFromFile("Wolf_Movement.png");
    dragontexture3.loadFromFile("DragonGreen.png");
    monsterTexture.loadFromFile("Monster_movement.png");
    dragontexture4.loadFromFile("DragonFINAL.png");
    minioter.loadFromFile("Minotour Movement.png");
    

    /* Texture hero_fightTexture;
     hero_fightTexture.loadFromFile("hero_fight.png");*/


     //Clock clock;
     //float deltaTime;

     /* -------------------------------------------------------------------------- */
     /*                                DECLEARING OBSTACLE                         */
     /* -------------------------------------------------------------------------- */
     //vector<Sprite>S_TREE(50);
     //vector<Sprite>S_STONE(50);
    Sprite fire_sprite;






    /* -------------------------------------------------------------------------- */
    /*                                OBSTACLE OBJECTS                            */
    /* -------------------------------------------------------------------------- */
 /*   Set_obstacle G_TREE(50);
    Set_obstacle G_STONE(50);*/




    /* -------------------------------------------------------------------------- */
    /*                                DECLEARING MATERIAL                         */
    /* -------------------------------------------------------------------------- */
    Sprite A;
    Sprite c_prize1, c_prize2;

    /* -------------------------------------------------------------------------- */
    /*                                MATERIAL OBJECTS                            */
    /* -------------------------------------------------------------------------- */

   /* Material G_SWORD(T);*/





    /* -------------------------------------------------------------------------- */
    /*                               PLAYER INFORMATION                           */
    /* -------------------------------------------------------------------------- */









    //Hero Oshayer1(&hero_fightTexture,Vector2u(4,4),0.1,100);




    /* -------------------------------------------------------------------------- */
    /*                                COLLISION CHECK                             */
    /* -------------------------------------------------------------------------- */

    Collision player_obstacle;


    //prize crown(700, 700, c_prize);
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



    crespr.setPosition(487, 280);




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

            if (menuevent.type == Event::KeyReleased || Mouse::isButtonPressed(Mouse::Left))
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

                if (menuevent.key.code == Keyboard::Return || Mouse::isButtonPressed(Mouse::Left))
                {
                    int x = mainmenu.MainMenuPressed();
                    int y = mainmenu.mousepress();
                    if (x == 0 || y == 0)
                    {
                        p = level1(backg,
                            c_prize1,
                            c_prize2,
                            A,
                            fire_sprite,
                            stonetex,
                            stonerevtex,
                            stone2tex,
                            stone2revtex,
                            stone3tex,
                            stone3revtex,
                            watertex,
                            bordertex,
                            borderhoritex,
                            opendoortex,
                            opendoorrevtex,
                            doortex,
                            doorrevtex,
                            chesttex,
                            openchesttex,
                            torchtex,
                            fireanime,
                            heroTexture,
                            dragonTexture,
                            firetexture,
                            spelltexture,
                            fireballTexture,
                            SkeletonTexture





                        );
                        //sf::RenderWindow window(sf::VideoMode(1800, 1000), "SFML works!");
                        //window.setFramerateLimit(200);

                        //while (window.isOpen())
                        //{

                        //    deltaTime = clock.restart().asSeconds();
                        //    Event event;
                        //    while (window.pollEvent(event))
                        //    {
                        //        if (event.type == sf::Event::Closed)
                        //            window.close();
                        //    }
                        //    /* -------------------------------------------------------------------------- */
                        //    /*                  BACKGROUND DRAW                                           */
                        //    /* -------------------------------------------------------------------------- */

                        //    window.clear(Color::White);

                        //    window.draw(PLF);



                        //    /* -------------------------------------------------------------------------- */
                        //    /*                                                                            */
                        //    /* -------------------------------------------------------------------------- */

                        //    //modus.prize_hijack(window, c_prize);






                        //    /* -------------------------------------------------------------------------- */
                        //    /*                  OBSTACLE SETTING FUNCTIONS                                */
                        //    /* -------------------------------------------------------------------------- */
                        //  /*  G_TREE.set_tree(window, S_TREE, TREE);
                        //    G_STONE.set_stone(window, S_STONE, STONE);*/
                        //    /* -------------------------------------------------------------------------- */
                        //    /*        MATERIAL SETTING FUNCTION                                           */
                        //    /* -------------------------------------------------------------------------- */
                        //    crown.set_prize(window, c_prize);
                        //    G_SWORD.set_material(window, A, T);


                        //    /* -------------------------------------------------------------------------- */
                        //    /*                  HERO MOVEMENT AND ANIMATION  and Other TASKS              */
                        //    /* -------------------------------------------------------------------------- */
                        //    //G_DRAGON.enemy_animation(window, dragon_sprite, dragon_frames);
                        //    //G_FIRE.hazard_animation(window,fire_sprite,fire_frames);

                        //    int x = crown.get_prize_position(c_prize);

                        //    //cout << x << endl;

                        //    if (x == -1500) {
                        //        Oshayer.Update_movement(heroTexture, deltaTime, 70);

                        //    }
                        //    else {
                        //        Oshayer.Update_movement(heroTexture, deltaTime, 100);

                        //    }


                        //   

                        //   
                        //    G_redSpell.Shoot(window,deltaTime,Oshayer.body,Drago.enemyBody);
                        //   
                        //    Oshayer.Health(Oshayer.body, Drago.enemyBody);

                        //    

                        //    
                        //    
                        //    
                        //    Oshayer.Draw(window);
                        //    Oshayer.prize_hijack(window, c_prize);

                        //    Drago.Update_enemy_movement(dragonTexture, deltaTime, Oshayer.body);
                        //    Drago.Draw(window);


                        //    dangerfire.Update_hazard(firetexture, deltaTime);
                        //    dangerfire.Draw(window);

                        //    G_greenfire.Update_hazard(greenfire, deltaTime);
                        //    G_greenfire.Draw(window);


                        //    /* -------------------------------------------------------------------------- */
                        //    /*                  COLLISION CHK FUNCTION                                    */
                        //    /* -------------------------------------------------------------------------- */



                        //    player_obstacle.collision_chk(Oshayer.body, S_STONE);

                        //    player_obstacle.collision_chk(Drago.enemyBody, S_STONE);




                        //    window.display();



                        //}

                     if (p == 1) {
                        p = level2(back2g,
            c_prize1,
            c_prize2,
            A,
            fire_sprite,
            stonetex,
            stonerevtex,
            stone2tex,
            stone2revtex,
            stone3tex,
            stone3revtex,
            watertex,
            bordertex,
            borderhoritex,
            opendoortex,
            opendoorrevtex,
            doortex,
            doorrevtex,
            chesttex,
            openchesttex,
            torch2tex,
            fireanime,
            heroTexture,
            dragonTexture,
            firetexture,
            spelltexture,
            fireballTexture,
            SkeletonTexture,
            dragonTexture2,
            Wolftexture




        );

        if (p == 2) {
            p = level3(back2g,
                c_prize1,
                c_prize2,
                A,
                fire_sprite,
                stonetex,
                stonerevtex,
                stone2tex,
                stone2revtex,
                stone3tex,
                stone3revtex,
                watertex,
                bordertex,
                borderhoritex,
                opendoortex,
                opendoorrevtex,
                doortex,
                doorrevtex,
                chesttex,
                openchesttex,
                torch2tex,
                fireanime,
                heroTexture,
                dragonTexture,
                firetexture,
                spelltexture,
                fireballTexture,
                SkeletonTexture,
                dragonTexture2,
                Wolftexture




            );

            if (p == 3) {

                p = level4(back4g,
                    c_prize1,
                    c_prize2,
                    A,
                    fire_sprite,
                    stonetex,
                    stonerevtex,
                    stone2tex,
                    stone2revtex,
                    stone3tex,
                    stone3revtex,
                    watertex,
                    bordertex,
                    borderhoritex,
                    opendoortex,
                    opendoorrevtex,
                    doortex,
                    doorrevtex,
                    chesttex,
                    openchesttex,
                    torch4tex,
                    fireanime,
                    heroTexture,
                    dragonTexture,
                    firetexture,
                    spelltexture,
                    fireballTexture,
                    SkeletonTexture,
                    dragontexture4,
                    minioter
                );
                RenderWindow credit(VideoMode(width, height), "Credits");


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
        }
    }
                        }



                    

                    if (x == 1 || y == 1)
                    {
                         p = 0;
                        menu.close();
                        l = level(backmenu, mainmenu);
                        if (l == 0) 
                        {

                            l = level1(backg,
                                c_prize1,
                                c_prize2,
                                A,
                                fire_sprite,
                                stonetex,
                                stonerevtex,
                                stone2tex,
                                stone2revtex,
                                stone3tex,
                                stone3revtex,
                                watertex,
                                bordertex,
                                borderhoritex,
                                opendoortex,
                                opendoorrevtex,
                                doortex,
                                doorrevtex,
                                chesttex,
                                openchesttex,
                                torchtex,
                                fireanime,
                                heroTexture,
                                dragonTexture,
                                firetexture,
                                spelltexture,
                                fireballTexture,
                                SkeletonTexture);





                                if (p == -1)
                                {
                                    p = level1(backg,
                                        c_prize1,
                                        c_prize2,
                                        A,
                                        fire_sprite,
                                        stonetex,
                                        stonerevtex,
                                        stone2tex,
                                        stone2revtex,
                                        stone3tex,
                                        stone3revtex,
                                        watertex,
                                        bordertex,
                                        borderhoritex,
                                        opendoortex,
                                        opendoorrevtex,
                                        doortex,
                                        doorrevtex,
                                        chesttex,
                                        openchesttex,
                                        torchtex,
                                        fireanime,
                                        heroTexture,
                                        dragonTexture,
                                        firetexture,
                                        spelltexture,
                                        fireballTexture,
                                        SkeletonTexture);
                                }
                                cout << p;
                                if (p == 1) {
                                    p = level2(back2g,
                                        c_prize1,
                                        c_prize2,
                                        A,
                                        fire_sprite,
                                        stonetex,
                                        stonerevtex,
                                        stone2tex,
                                        stone2revtex,
                                        stone3tex,
                                        stone3revtex,
                                        watertex,
                                        bordertex,
                                        borderhoritex,
                                        opendoortex,
                                        opendoorrevtex,
                                        doortex,
                                        doorrevtex,
                                        chesttex,
                                        openchesttex,
                                        torch2tex,
                                        fireanime,
                                        heroTexture,
                                        dragonTexture,
                                        firetexture,
                                        spelltexture,
                                        fireballTexture,
                                        SkeletonTexture,
                                        dragonTexture2,
                                        Wolftexture




                                    );

                                    if (p == 2) {
                                        p = level3(back2g,
                                            c_prize1,
                                            c_prize2,
                                            A,
                                            fire_sprite,
                                            stonetex,
                                            stonerevtex,
                                            stone2tex,
                                            stone2revtex,
                                            stone3tex,
                                            stone3revtex,
                                            watertex,
                                            bordertex,
                                            borderhoritex,
                                            opendoortex,
                                            opendoorrevtex,
                                            doortex,
                                            doorrevtex,
                                            chesttex,
                                            openchesttex,
                                            torch2tex,
                                            fireanime,
                                            heroTexture,
                                            dragonTexture,
                                            firetexture,
                                            spelltexture,
                                            fireballTexture,
                                            SkeletonTexture,
                                            dragonTexture2,
                                            Wolftexture




                                        );

                                        if(p==3){

                                        p = level4(back4g,
                                            c_prize1,
                                            c_prize2,
                                            A,
                                            fire_sprite,
                                            stonetex,
                                            stonerevtex,
                                            stone2tex,
                                            stone2revtex,
                                            stone3tex,
                                            stone3revtex,
                                            watertex,
                                            bordertex,
                                            borderhoritex,
                                            opendoortex,
                                            opendoorrevtex,
                                            doortex,
                                            doorrevtex,
                                            chesttex,
                                            openchesttex,
                                            torch4tex,
                                            fireanime,
                                            heroTexture,
                                            dragonTexture,
                                            firetexture,
                                            spelltexture,
                                            fireballTexture,
                                            SkeletonTexture,
                                            dragontexture4,
                                            minioter
                                        );

                                        if(p==4)
                                        {
                                            RenderWindow credit(VideoMode(width, height), "Credits");


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

                                        }
                                    }
                                }



                              //  RenderWindow gameover(VideoMode(width, height), "Credits");



                                //while (gameover.isOpen())
                                //{
                                //    Event creditevent;
                                //    while (gameover.pollEvent(creditevent))
                                //    {
                                //        if (creditevent.type == Event::Closed)
                                //            gameover.close();

                                //    }

                                //    gameover.clear();


                                //    gameover.draw(crespr);
                                //    for (int i = 0;i < 4;i++)
                                //    {
                                //        credit.draw(txt[i]);
                                //    }
                                //    credit.display();


                                //}

                            
                        }
                        if (l == 1||p==1)
                        {
                            p = level2(back2g,
                                c_prize1,
                                c_prize2,
                                A,
                                fire_sprite,
                                stonetex,
                                stonerevtex,
                                stone2tex,
                                stone2revtex,
                                stone3tex,
                                stone3revtex,
                                watertex,
                                bordertex,
                                borderhoritex,
                                opendoortex,
                                opendoorrevtex,
                                doortex,
                                doorrevtex,
                                chesttex,
                                openchesttex,
                                torch2tex,
                                fireanime,
                                heroTexture,
                                dragonTexture,
                                firetexture,
                                spelltexture,
                                fireballTexture,
                                SkeletonTexture, 
                                dragonTexture2,
                                Wolftexture
                              



                            );

                        }
                        if (l == 2||p==2)
                        {
                            p = level3(back3g,
                                c_prize1,
                                c_prize2,
                                A,
                                fire_sprite,
                                stonetex,
                                stonerevtex,
                                stone2tex,
                                stone2revtex,
                                stone3tex,
                                stone3revtex,
                                watertex,
                                bordertex,
                                borderhoritex,
                                opendoortex,
                                opendoorrevtex,
                                doortex,
                                doorrevtex,
                                chesttex,
                                openchesttex,
                                torch3tex,
                                fireanime,
                                heroTexture,
                                dragonTexture,
                                firetexture,
                                spelltexture,
                                fireballTexture,
                                SkeletonTexture,
                                dragontexture3,
                                monsterTexture);




                        }
                          if (l == 3||p==3)
                          {
                              p = level4(back4g,
                                  c_prize1,
                                  c_prize2,
                                  A,
                                  fire_sprite,
                                  stonetex,
                                  stonerevtex,
                                  stone2tex,
                                  stone2revtex,
                                  stone3tex,
                                  stone3revtex,
                                  watertex,
                                  bordertex,
                                  borderhoritex,
                                  opendoortex,
                                  opendoorrevtex,
                                  doortex,
                                  doorrevtex,
                                  chesttex,
                                  openchesttex,
                                  torch4tex,
                                  fireanime,
                                  heroTexture,
                                  dragonTexture,
                                  firetexture,
                                  spelltexture,
                                  fireballTexture,
                                  SkeletonTexture,
                                  dragontexture4,
                                  minioter
                              );

                              RenderWindow credit(VideoMode(width, height), "Credits");


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


                    }

                    if (x == 2 || y == 2)
                    {
                        RenderWindow credit(VideoMode(width, height), "Credits");
                        

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
        menu.draw(introspr);
        menu.display();
    }












    //while (window.isOpen())
    //{

    //    deltaTime = clock.restart().asSeconds();
    //    Event event;
    //    while (window.pollEvent(event))
    //    {
    //        if (event.type == sf::Event::Closed)
    //            window.close();
    //    }
    //    /* -------------------------------------------------------------------------- */
    //    /*                  BACKGROUND DRAW                                           */
    //    /* -------------------------------------------------------------------------- */

    //    window.clear(Color::White);

    //    window.draw(PLF);

    //    
    //    
    //    /* -------------------------------------------------------------------------- */
    //    /*                                                                            */
    //    /* -------------------------------------------------------------------------- */

    //    //modus.prize_hijack(window, c_prize);
    //    

    //    



    //    /* -------------------------------------------------------------------------- */
    //    /*                  OBSTACLE SETTING FUNCTIONS                                */
    //    /* -------------------------------------------------------------------------- */
    //    G_TREE.set_tree(window, S_TREE,TREE);
    //    G_STONE.set_stone(window, S_STONE,STONE);
    //    /* -------------------------------------------------------------------------- */
    //    /*        MATERIAL SETTING FUNCTION                                           */
    //    /* -------------------------------------------------------------------------- */
    //    crown.set_prize(window, c_prize);
    //    G_SWORD.set_material(window, A, T);

    //    
    //    /* -------------------------------------------------------------------------- */
    //    /*                  HERO MOVEMENT AND ANIMATION  and Other TASKS              */
    //    /* -------------------------------------------------------------------------- */
    //    //G_DRAGON.enemy_animation(window, dragon_sprite, dragon_frames);
    //    //G_FIRE.hazard_animation(window,fire_sprite,fire_frames);

    //    

    //    Oshayer.Update_movement(heroTexture,deltaTime);
    //    
    //    Oshayer.Draw(window);
    //    Oshayer.prize_hijack(window, c_prize);
    //    
    //    Drago.Update_enemy_movement(dragonTexture,deltaTime,Oshayer.body);
    //    Drago.Draw(window);


    //    dangerfire.Update_hazard(firetexture,deltaTime);
    //    dangerfire.Draw(window);

    //    G_greenfire.Update_hazard(greenfire, deltaTime);
    //    G_greenfire.Draw(window);


    //    /* -------------------------------------------------------------------------- */
    //    /*                  COLLISION CHK FUNCTION                                    */
    //    /* -------------------------------------------------------------------------- */



    //    player_obstacle.collision_chk(Oshayer.body, S_STONE);

    //  


    //    window.display();



    //}




    return 0;
}