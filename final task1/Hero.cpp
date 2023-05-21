#include "Hero.h"
#include "collision.h"


Hero::Hero(Texture* texture, Vector2u imageCount, float switchTime,float x, float y):
	animation(texture,imageCount,switchTime)
{
	this->speed = speed;
	row = 0;


	body.setTexture(*texture);
	body.setPosition(x,y);


    border.setFillColor(sf::Color::Transparent);
    border.setOutlineThickness(2.0f);
    border.setOutlineColor(sf::Color::Red);

    

    




}


//void Hero::initborder() {
//    border.setFillColor(sf::Color::Transparent);
//    border.setOutlineThickness(2.0f);
//    border.setOutlineColor(sf::Color::Red);
//
//
//}


void Hero::Update_Clock(Texture& texture, float deltaTime, float speed) {
    elapsed += clk.restart();
    if (!powerGenerate && elapsed >= interval) {
        powerGenerate = true;
       
        ss1 << "RUN";
        
    }
        if (powerGenerate == true && elapsed >= interval + seconds(0.5)) {
            powerGenerate = false;
            elapsed = milliseconds(0);
            
            ss2 << "walk";
        }


 }


void Hero::special_movement(Texture& texture, float deltaTime, float speed) {
    Vector2f position(0, 0);
    if (powerGenerate == true) {
        if (Keyboard::isKeyPressed(Keyboard::LShift)) {
            if (Keyboard::isKeyPressed(Keyboard::D)) {
                animation.Update(3, deltaTime); 
                position.x += speed * deltaTime;
                body.move(position);

            }
            else if (Keyboard::isKeyPressed(Keyboard::A)) {
                animation.Update(1,deltaTime);
                position.x -= speed * deltaTime;
                body.move(position);

            }
            else if (Keyboard::isKeyPressed(Keyboard::W)) {
                animation.Update(0, deltaTime);
                position.y -= speed * deltaTime;
                body.move(position);


            }
            else if (Keyboard::isKeyPressed(Keyboard::S)) {
                animation.Update(2, deltaTime);
                position.y += speed * deltaTime;
                body.move(position);
            }
        }

    }

    body.setTextureRect(animation.uvRect);

}

    



void Hero::Update_movement(Texture& texture, float deltaTime,float speed) {
    Vector2f position(0, 0);
    //border.setSize(Vector2f(body.getGlobalBounds().width - 40, body.getGlobalBounds().height - 20));
    //border.setPosition(body.getPosition().x + 20, body.getPosition().y + 10);

    border.setSize(Vector2f(body.getGlobalBounds().width , body.getGlobalBounds().height ));
    border.setPosition(body.getPosition().x , body.getPosition().y );
   





    
        if (Keyboard::isKeyPressed(Keyboard::D)) {
            if (Keyboard::isKeyPressed(Keyboard::S)) {
                animation.Update(3, deltaTime);

                position.x += speed * 0.7 * deltaTime;
                position.y += speed * 0.7 * deltaTime;
                body.move(position);
            }
            else if (Keyboard::isKeyPressed(Keyboard::W)) {
                animation.Update(3, deltaTime);
                position.x += speed * 0.7 * deltaTime;
                position.y -= speed * 0.7 * deltaTime;
                body.move(position);
            }

            else {
                animation.Update(3, deltaTime);
                position.x += speed * deltaTime;
                body.move(position);

            }
        }

        else if (Keyboard::isKeyPressed(Keyboard::A)) {
            if (Keyboard::isKeyPressed(Keyboard::S)) {
                animation.Update(1, deltaTime);
                position.x -= speed * 0.7 * deltaTime;
                position.y += speed * 0.7 * deltaTime;
                body.move(position);
            }
            else if (Keyboard::isKeyPressed(Keyboard::W)) {
                animation.Update(1, deltaTime);
                position.x -= speed * 0.7 * deltaTime;
                position.y -= speed * 0.7 * deltaTime;
                body.move(position);
            }

            else {
                animation.Update(1, deltaTime);
                position.x -= speed * deltaTime;
                body.move(position);

            }
        }

        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            animation.Update(0, deltaTime);
            position.y -= speed * deltaTime;
            body.move(position);
        }

        else if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(2, deltaTime);
            position.y += speed * deltaTime;
            body.move(position);
        }

        /*else if (Keyboard::isKeyPressed(Keyboard::Space)) {
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                animation.Update(11, deltaTime);
            }
            else if (Keyboard::isKeyPressed(Keyboard::Left)) {
                animation.Update(9, deltaTime);
            }
            else if (Keyboard::isKeyPressed(Keyboard::Up)) {
                animation.Update(8,deltaTime);
            }
            else if (Keyboard::isKeyPressed(Keyboard::Down)) {
                animation.Update(10,deltaTime);
            }

        }*/

        //border.setSize(Vector2f(body.getGlobalBounds().width - 40, body.getGlobalBounds().height - 20));
        //border.setPosition(body.getPosition().x + 20, body.getPosition().y + 10);



        body.setTextureRect(animation.uvRect);

    }
    
    /*if (Keyboard::isKeyPressed(Keyboard::D)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(3, deltaTime);

            position.x += speed* 0.7  * deltaTime;
            position.y += speed * 0.7 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)){
            animation.Update(3, deltaTime);
            position.x += speed * 0.7 * deltaTime;
            position.y -= speed * 0.7 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(3, deltaTime);
            position.x += speed * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::A)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(1, deltaTime);
            position.x -= speed * 0.7 * deltaTime;
            position.y += speed * 0.7 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            animation.Update(1, deltaTime);
            position.x -= speed * 0.7 * deltaTime;
            position.y -= speed * 0.7 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(1, deltaTime);
            position.x -= speed * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::W)) {
        animation.Update(0, deltaTime);
        position.y -= speed * deltaTime;
        body.move(position);
    }

    else if (Keyboard::isKeyPressed(Keyboard::S)) {
        animation.Update(2, deltaTime);
        position.y += speed * deltaTime;
        body.move(position);
    }*/

    /*else if (Keyboard::isKeyPressed(Keyboard::Space)) {
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            animation.Update(11, deltaTime);
        }
        else if (Keyboard::isKeyPressed(Keyboard::Left)) {
            animation.Update(9, deltaTime);
        }
        else if (Keyboard::isKeyPressed(Keyboard::Up)) {
            animation.Update(8,deltaTime);
        }
        else if (Keyboard::isKeyPressed(Keyboard::Down)) {
            animation.Update(10,deltaTime);
        }

    }*/



    //body.setTextureRect(animation.uvRect);



void Hero::prize_hijack(RenderWindow& window, Sprite& c_prize) {
    FloatRect rect1 = body.getGlobalBounds();
    FloatRect rect2 = c_prize.getGlobalBounds();

    if (rect1.intersects(rect2)) {
        if (Keyboard::isKeyPressed(Keyboard::H)) {
            c_prize.setPosition(-1500, -1500);
        }

    }
    else {
        if (Keyboard::isKeyPressed(Keyboard::R)) {
            c_prize.setPosition(body.getPosition().x + 50, body.getPosition().y + 50);
        }
    }

}

//void Hero::Update_fight(Texture& texture,float deltaTime) {
//
//    Vector2f position(0, 0);
//
//
//
//
//    if (Keyboard::isKeyPressed(Keyboard::D)) {
//        if (Keyboard::isKeyPressed(Keyboard::S)) {
//            animation.Update(1, deltaTime);
//            position.x += 70 * deltaTime;
//            position.y += 70 * deltaTime;
//            body.move(position);
//        }
//        else if (Keyboard::isKeyPressed(Keyboard::W)) {
//            animation.Update(1, deltaTime);
//            position.x += 70 * deltaTime;
//            position.y -= 70 * deltaTime;
//            body.move(position);
//        }
//
//        else {
//            animation.Update(1, deltaTime);
//            position.x += 100 * deltaTime;
//            body.move(position);
//
//        }
//    }
//
//    else if (Keyboard::isKeyPressed(Keyboard::A)) {
//        if (Keyboard::isKeyPressed(Keyboard::S)) {
//            animation.Update(2, deltaTime);
//            position.x -= 70 * deltaTime;
//            position.y += 70 * deltaTime;
//            body.move(position);
//        }
//        else if (Keyboard::isKeyPressed(Keyboard::W)) {
//            animation.Update(2, deltaTime);
//            position.x -= 70 * deltaTime;
//            position.y -= 70 * deltaTime;
//            body.move(position);
//        }
//
//        else {
//            animation.Update(2, deltaTime);
//            position.x -= 100 * deltaTime;
//            body.move(position);
//
//        }
//    }
//
//    else if (Keyboard::isKeyPressed(Keyboard::W)) {
//        animation.Update(3, deltaTime);
//        position.y -= 100 * deltaTime;
//        body.move(position);
//    }
//
//    else if (Keyboard::isKeyPressed(Keyboard::S)) {
//        animation.Update(0, deltaTime);
//        position.y += 100 * deltaTime;
//        body.move(position);
//    }
//
//
//
//    body.setTextureRect(animation.uvRect);
//
//}

//int Hero::Health(Sprite& A, Sprite& B) {
//
//    int counter = 0;
//    FloatRect a = A.getGlobalBounds();
//    FloatRect b = B.getGlobalBounds();
//    if (a.intersects(b)) {
//        counter++;
//    }
//
//    //cout << counter << endl;
//    return counter;
//}








//void Hero::collider(vector<Sprite>& X) {
//    FloatRect boundplayer = border.getGlobalBounds();
//    
//
//    FloatRect nextPos;
//
//    for (int i = 0;i < 50;i++) {
//        FloatRect boundobject = X[i].getGlobalBounds();
//
//        if (boundplayer.left + boundplayer.width >= boundobject.left&&
//           boundplayer.left <= boundobject.left + boundobject.width &&
//            boundplayer.top + boundplayer.height >= boundobject.top &&
//            boundplayer.top <= boundobject.top + boundobject.height) {
//
//            cout << "YES" << endl;
//
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//
//
//    
//
//
//
//}


void Hero::Update_death(Texture& texture, float deltaTime, float speed) {
    animation.Update(12, deltaTime);

    body.setTextureRect(animation.uvRect);

}




void Hero::Draw(RenderWindow& window) {
    View view(FloatRect(0, 0, 1800, 1000));
    window.setView(view);
    view.setCenter(body.getPosition());
    window.setView(view);
	window.draw(body);
    window.draw(border);

}
