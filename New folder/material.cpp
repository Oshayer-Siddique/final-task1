#include "material.h"

Material::Material(Texture& T) {

}

void Material::set_material(RenderWindow& window, Sprite& A,Texture& T) {
	A.setTexture(T);
	A.setPosition(600, 700);
	window.draw(A);

}