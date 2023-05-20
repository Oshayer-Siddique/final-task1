#include "Hero.h"

Hero::Hero(Texture* texture, Vector2u imageCount, float switchTime):
	animation(texture,imageCount,switchTime)
{
	this->speed = speed;
	row = 0;


	body.setTexture(*texture);
	body.setPosition(1200, 200);

}

void Hero::Update_movement(Texture& texture, float deltaTime,float speed) {
    Vector2f position(0, 0);

    

    
    if (Keyboard::isKeyPressed(Keyboard::D)) {
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



    body.setTextureRect(animation.uvRect);

}

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

int Hero::Health(Sprite& A, Sprite& B) {

    int counter = 0;
    FloatRect a = A.getGlobalBounds();
    FloatRect b = B.getGlobalBounds();
    if (a.intersects(b)) {
        counter++;
    }

    cout << counter << endl;
    return counter;
}


void Hero::Update_special_movement(Texture& texture, float deltaTime, float speed) {
    elapsed += clk.restart();
    if (!powerGenerate && elapsed >= interval) {
        powerGenerate = true;
        if (powerGenerate == true && elapsed >= interval + seconds(3)) {
            powerGenerate = false;
            elapsed = milliseconds(0);
        }

    }
}


void Hero::Draw(RenderWindow& window) {
    View view(FloatRect(0, 0, 1800, 1000));
    window.setView(view);
    view.setCenter(body.getPosition());
    window.setView(view);
	window.draw(body);

}
