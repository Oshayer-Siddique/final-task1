#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "Animation.h"
using namespace std;
using namespace sf;
class SpellCast
{
public:
	SpellCast(Texture& texture);

	Sprite spell_sprite;

	Sprite shooter;

	void Shoot(RenderWindow& window,float deltaTime, Sprite& shooter, Sprite& target);

	void Shoot_hero(RenderWindow& window, float deltaTime, Sprite& shooter, Sprite& target);

	void spellTimer();

private:
	Texture texture;

	Vector2f spellVelocity;
	Vector2f  Xspellvelocity;


	Time elapsedtime = milliseconds(0);
	Time intervaltime = seconds(3);
	Clock clk1;
	bool power = false;


	float time = 0;

	bool shoot = false;

	float XvelocityX;

	float velocityX = 0;
	float velocityY = 0;
};

