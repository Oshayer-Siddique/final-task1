








#include "hazard.h"

Hazard::Hazard(Texture* texture, Vector2u imageCount, float switchTime, float speed, float x, float y) :
	hazard_animation(texture, imageCount, switchTime)
{
	this->speed = speed;

	row = 0;
	hazardBody.setTexture(*texture);
	hazardBody.setPosition(x, y);


}

void Hazard::Update_hazard(Texture& texture, float deltaTime) {


	hazard_animation.Update(0, deltaTime);

	hazardBody.setTextureRect(hazard_animation.uvRect);

}

void Hazard::update_hazard_unbalanced_pic(RenderWindow& window, Sprite& A1, vector<Texture>& E1) {
	A1.setTexture(E1[0]);


	elapsedTime += clk.restart();
	if (elapsedTime.asSeconds() >= framerate) {
		currentframe = (currentframe + 1) % 4;
		A1.setTexture(E1[currentframe]);
		clk.restart();
	}





}

void Hazard::Draw(RenderWindow& window) {
	window.draw(hazardBody);
}
