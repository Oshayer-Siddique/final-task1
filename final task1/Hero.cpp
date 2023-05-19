#include "Hero.h"

Hero::Hero(Texture* texture, Vector2u imageCount, float switchTime, float speed):
	animation(texture,imageCount,switchTime)
{
	this->speed = speed;
	row = 0;


	body.setTexture(*texture);
	body.setPosition(1200, 200);

}

void Hero::Update_movement(Texture& texture, float deltaTime) {
    Vector2f position(0, 0);



    
    if (Keyboard::isKeyPressed(Keyboard::D)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(1, deltaTime);
            position.x += 70 * deltaTime;
            position.y += 70 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)){
            animation.Update(1, deltaTime);
            position.x += 70 * deltaTime;
            position.y -= 70 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(1, deltaTime);
            position.x += 100 * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::A)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(2, deltaTime);
            position.x -= 70 * deltaTime;
            position.y += 70 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            animation.Update(2, deltaTime);
            position.x -= 70 * deltaTime;
            position.y -= 70 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(2, deltaTime);
            position.x -= 100 * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::W)) {
        animation.Update(3, deltaTime);
        position.y -= 100 * deltaTime;
        body.move(position);
    }

    else if (Keyboard::isKeyPressed(Keyboard::S)) {
        animation.Update(0, deltaTime);
        position.y += 100 * deltaTime;
        body.move(position);
    }



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

void Hero::Update_fight(Texture& texture,float deltaTime) {

    Vector2f position(0, 0);




    if (Keyboard::isKeyPressed(Keyboard::D)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(1, deltaTime);
            position.x += 70 * deltaTime;
            position.y += 70 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            animation.Update(1, deltaTime);
            position.x += 70 * deltaTime;
            position.y -= 70 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(1, deltaTime);
            position.x += 100 * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::A)) {
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            animation.Update(2, deltaTime);
            position.x -= 70 * deltaTime;
            position.y += 70 * deltaTime;
            body.move(position);
        }
        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            animation.Update(2, deltaTime);
            position.x -= 70 * deltaTime;
            position.y -= 70 * deltaTime;
            body.move(position);
        }

        else {
            animation.Update(2, deltaTime);
            position.x -= 100 * deltaTime;
            body.move(position);

        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::W)) {
        animation.Update(3, deltaTime);
        position.y -= 100 * deltaTime;
        body.move(position);
    }

    else if (Keyboard::isKeyPressed(Keyboard::S)) {
        animation.Update(0, deltaTime);
        position.y += 100 * deltaTime;
        body.move(position);
    }



    body.setTextureRect(animation.uvRect);

}



void Hero::Draw(RenderWindow& window) {
    View view(FloatRect(0, 0, 1800, 1000));
    window.setView(view);
    view.setCenter(body.getPosition());
    window.setView(view);
	window.draw(body);

}
