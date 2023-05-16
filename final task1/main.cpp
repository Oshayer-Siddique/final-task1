#include <SFML/Graphics.hpp>
#include<iostream>
#include "player.h"

#include "prize.h"
#include "obstacle.h"
#include "collision.h"
#include "material.h"
using namespace std;
using namespace sf;

int main()
{
    
    Sprite c_prize;

    /* -------------------------------------------------------------------------- */
    /*                                SETTING BACKGROUND                          */
    /* -------------------------------------------------------------------------- */
    Texture platform;
    platform.loadFromFile("background.png");
    Sprite PLF;
    PLF.setTexture(platform);
    PLF.setPosition(0, 0);



    /* -------------------------------------------------------------------------- */
    /*                                LOADING TEXTURE                             */
    /* -------------------------------------------------------------------------- */

    Texture T;
    T.loadFromFile("sword.png");
    Texture TREE;
    TREE.loadFromFile("tree.png");
    Texture STONE;
    STONE.loadFromFile("stone.png");

    
    /* -------------------------------------------------------------------------- */
    /*                                DECLEARING OBSTACLE                         */
    /* -------------------------------------------------------------------------- */
    vector<Sprite>S_TREE(50);
    vector<Sprite>S_STONE(50);



    /* -------------------------------------------------------------------------- */
    /*                                OBSTACLE OBJECTS                            */
    /* -------------------------------------------------------------------------- */
    Set_obstacle G_TREE(50);
    Set_obstacle G_STONE(50);


    /* -------------------------------------------------------------------------- */
    /*                                DECLEARING MATERIAL                         */
    /* -------------------------------------------------------------------------- */
    Sprite A;


    /* -------------------------------------------------------------------------- */
    /*                                MATERIAL OBJECTS                            */
    /* -------------------------------------------------------------------------- */

    Material G_SWORD(T);





    /* -------------------------------------------------------------------------- */
    /*                               PLAYER INFORMATION                           */
    /* -------------------------------------------------------------------------- */
    Player modus(20, 20);




    /* -------------------------------------------------------------------------- */
    /*                                COLLISION CHECK                             */
    /* -------------------------------------------------------------------------- */

    Collision player_obstacle(modus.sprite);





    sf::RenderWindow window(sf::VideoMode(1800, 1000), "SFML works!");

    window.setFramerateLimit(30);


    
    
    prize crown(700, 700, c_prize);



    



    while (window.isOpen())
    {

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        /* -------------------------------------------------------------------------- */
        /*                  BACKGROUND DRAW                                           */
        /* -------------------------------------------------------------------------- */

        window.clear(Color::White);

        window.draw(PLF);
        /* -------------------------------------------------------------------------- */
        /*                                                                            */
        /* -------------------------------------------------------------------------- */

        modus.prize_hijack(window, c_prize);



        /* -------------------------------------------------------------------------- */
        /*                  OBSTACLE SETTING FUNCTIONS                                */
        /* -------------------------------------------------------------------------- */
        G_TREE.set_tree(window, S_TREE,TREE);
        G_STONE.set_stone(window, S_STONE,STONE);
        /* -------------------------------------------------------------------------- */
        /*        MATERIAL SETTING FUNCTION                                           */
        /* -------------------------------------------------------------------------- */
        crown.set_prize(window, c_prize);
        G_SWORD.set_material(window, A, T);

        
        /* -------------------------------------------------------------------------- */
        /*                  HANDLE INPUT FUNCTION                                     */
        /* -------------------------------------------------------------------------- */

        modus.HandleInput(window, 8);


        /* -------------------------------------------------------------------------- */
        /*                  COLLISION CHK FUNCTION                                    */
        /* -------------------------------------------------------------------------- */

        player_obstacle.collision_chk(modus.sprite, S_STONE);
        player_obstacle.collision_chk(modus.sprite, S_TREE);

        modus.inThefield();









        window.display();



    }




    return 0;
}
