#include <SFML/Graphics.hpp>
#include<iostream>
#include "player.h"
#include "background.h"
#include "prize.h"
#include "obstacle.h"
#include "collision.h"
using namespace std;
using namespace sf;

int main()
{
    vector<Sprite>stone(50);
    Sprite c_prize;


    //Declearing of obstacle
    vector<Sprite>TREE(50);
    vector<Sprite>STONE(50);



    
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "SFML works!");

    window.setFramerateLimit(30);


    Player modus(20, 20);
    Background background(0, 0);
    prize crown(700,700,c_prize);
    
                            //...//
    //Obstacle Object Start Here
    Set_obstacle G_TREE(50);
    Set_obstacle G_STONE(50);










    //Obstacle object End here
    
                            //...///

    //Collision Ckeck  Object Start Here
    
    Collision player_obstacle(modus.sprite);


    //Collision Check end here
    
                            //...//
    
    //Background Load start
    Texture platform;
    platform.loadFromFile("background.png");
    Sprite PLF;
    PLF.setTexture(platform);
    PLF.setPosition(0, 0);
    //Background load end
                            //....//

    /*Texture u;
    u.loadFromFile("stone.png");

    Sprite v;

    v.setTexture(u);

    v.setPosition(500,500);*/

    while (window.isOpen())
    {
        
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear(Color::White);

        window.draw(PLF);

        modus.prize_hijack(window, c_prize);



        //OBSTACLE SETTING  FUNCTION Start
        G_TREE.set_tree(window, TREE);
        G_STONE.set_stone(window, STONE);



        //End.
                            //...//

        crown.set_prize(window, c_prize);
            
                            //...//
        //Handle input FUNCTION start Here

        modus.HandleInput(window,8);


        //handle input end here
                                
                            //...//

        //Collision Function start here
        
        player_obstacle.collision_chk(modus.sprite, STONE);
        player_obstacle.collision_chk(modus.sprite, TREE);

        modus.inThefield();

        //Collision function end here
                            //...//

        
        


        
        

        window.display();


   
    }

    


    return 0;
}
