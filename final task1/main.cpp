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
using namespace std;
using namespace sf;

int main()
{

    float width = 1800;
    float height = 1000;
    int l;
    Texture tex, texmenu, cretex, background, stonetex, stonerevtex, watertex, bordertex, borderhoritex, doortex, doorrevtex, opendoortex, opendoorrevtex, chesttex, openchesttex, giftex;
    Sprite backg, backmenu, crespr;

    if (!stonetex.loadFromFile("block.png")) {}
    if (!stonerevtex.loadFromFile("blockrev.png")) {}

    if (!watertex.loadFromFile("menuback.jpg")) {}
    if (!bordertex.loadFromFile("side.png")) {}
    if (!borderhoritex.loadFromFile("sidehori.png")) {}
    if (!opendoortex.loadFromFile("opendoor.png")) {}
    if (!opendoorrevtex.loadFromFile("opendoorrev.png")) {}
    if (!doortex.loadFromFile("doorclosed.png")) {}
    if (!doorrevtex.loadFromFile("doorclosedrev.png")) {}
    if (!chesttex.loadFromFile("menuback.jpg")) {}
    if (!openchesttex.loadFromFile("menuback.jpg")) {}

    MainMenu mainmenu(1800, 1000);
    if (!texmenu.loadFromFile("menuback.jpg")) {}
    backmenu.setTexture(texmenu);

    if (!background.loadFromFile("background1.png")) {}
    backg.setTexture(background);

    if (cretex.loadFromFile("credit.jpg")) {}
    crespr.setTexture(cretex);




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
    Sprite c_prize;

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


    prize crown(700, 700, c_prize);





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
                        l = level1(backg,
                            c_prize,
                            A,
                            fire_sprite,
                            stonetex,
                            stonerevtex,
                            watertex,
                            bordertex,
                            borderhoritex,
                            opendoortex,
                            opendoorrevtex,
                            doortex,
                            doorrevtex,
                            chesttex,
                            openchesttex,
                            heroTexture,
                            dragonTexture,
                            firetexture,
                            greenfire,
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



                    }

                    if (x == 1)
                    {

                        menu.close();
                        l = level(backmenu);
                        if (l == 0) {
                            level1(backg,
                                c_prize,
                                A,
                                fire_sprite,
                                stonetex,
                                stonerevtex,
                                watertex,
                                bordertex,
                                borderhoritex,
                                opendoortex,
                                opendoorrevtex,
                                doortex,
                                doorrevtex,
                                chesttex,
                                openchesttex,
                                heroTexture,
                                dragonTexture,
                                firetexture,
                                greenfire,
                                spelltexture,
                                fireballTexture,
                                SkeletonTexture



                            );
                        }

                    }

                    if (x == 2)
                    {

                        RenderWindow credit(VideoMode(1800, 1000), "Levels");


                        while (credit.isOpen())
                        {
                            Event creditevent;
                            while (credit.pollEvent(creditevent))
                            {
                                if (creditevent.type == Event::Closed)
                                    credit.close();
                            }

                            credit.clear();
                           // credit.draw(crespr);


                            credit.display();


                        }

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
