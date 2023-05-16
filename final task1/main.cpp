#include <SFML/Graphics.hpp>
#include<iostream>
#include "player.h"
#include "background.h"
#include "prize.h"
using namespace std;
using namespace sf;

int main()
{
    vector<Sprite>stone(50);
    Sprite c_prize;


    
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "SFML works!");

    window.setFramerateLimit(30);

    Player modus(20, 20);
    Background background(0, 0);
    prize crown(700,700,c_prize);

    Texture platform;
    platform.loadFromFile("background.png");
    Sprite PLF;
    PLF.setTexture(platform);
    PLF.setPosition(0, 0);
    
    


    // crown set


    

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
        /*FloatRect U = modus.sprite.getGlobalBounds();

        FloatRect V = v.getGlobalBounds();

        /*if (U.intersects(V)) {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }*/
        window.draw(PLF);
        //background.set_background(window);
        //window.draw(v);
        background.set_obstacle_stone(window,stone);
        
       
        modus.HandleInput(window,8);
        modus.stone_collsion(stone);

        modus.inThefield();

        crown.set_prize(window,c_prize);
        //crown.handle_prize(window, c_prize);
        modus.prize_hijack(window, c_prize);
        

        window.display();


   
    }

    


    return 0;
}
