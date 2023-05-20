
#include "SpellCast.h"

SpellCast::SpellCast(Texture& texture) {
	this->spell_sprite.setTexture(texture);

}

void SpellCast::Shoot(RenderWindow& window, float deltaTime, Sprite& shooter, Sprite& target) {
	float x = target.getPosition().x;
	float y = target.getPosition().y;

	float u = shooter.getPosition().x;
	float v = shooter.getPosition().y;


	if (Keyboard::isKeyPressed(Keyboard::Space)) {
		spell_sprite.setPosition(u, v);
		velocityX = 500;
		spellVelocity = Vector2f(x - u, y - v);

		float length = sqrt(spellVelocity.x * spellVelocity.x + spellVelocity.y * spellVelocity.y);

		spellVelocity = spellVelocity / length;

		spellVelocity = spellVelocity * velocityX;
		

	}

	spell_sprite.move(spellVelocity * deltaTime);
	window.draw(spell_sprite);
}