#include "hazard.h"

Hazard::Hazard(Sprite& A1,float x, float y) {

	A1.setPosition(x, y);
	
}

void Hazard::hazard_animation(RenderWindow& window, Sprite& A1, vector<Texture>& E1) {

	A1.setTexture(E1[0]);

	


	elapsedTime += clk.restart();
	if (elapsedTime.asSeconds() >= framerate) {
		currentframe = (currentframe + 1) % 4;
		A1.setTexture(E1[currentframe]);
		clk.restart();
	}

	window.draw(A1);


}