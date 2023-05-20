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

private:
	Texture texture;

	Vector2f spellVelocity;


	float time = 0;

	bool shoot = false;

	float velocityX = 0;
	float velocityY = 0;
};

