#include "collision.h"

Collision::Collision(Sprite& A) {
	
}

void Collision::collision_chk(Sprite& A, vector<Sprite>& B) {
	FloatRect nextPos;


	for (int i = 0;i < 4;i++) {

		FloatRect boundplayer = A.getGlobalBounds();

		FloatRect boundobject = B[i].getGlobalBounds();

		nextPos = boundplayer;
		//nextPos.left += velocityX;
		//nextPos.top += velocityX;
		if (boundobject.intersects(nextPos)) {
			//Right Collision
			if ((boundplayer.left < boundobject.left) &&
				(boundplayer.left + boundplayer.width < boundobject.left + boundobject.width) &&
				(boundplayer.top < boundobject.top + boundobject.height) &&
				(boundplayer.top + boundplayer.height > boundobject.top)) {
				//velocityX = 0;
				A.setPosition(boundobject.left - boundplayer.width, boundplayer.top);
			}
			//Left Collision

			else if ((boundplayer.left > boundobject.left) &&
				(boundplayer.left + boundplayer.width > boundobject.left + boundobject.width) &&
				(boundplayer.top < boundobject.top + boundobject.height) &&
				(boundplayer.top + boundplayer.height > boundobject.top)) {

				//velocityX = 0;
				A.setPosition(boundobject.left + boundobject.width, boundplayer.top);

			}

			// Bottom Collision

			else if ((boundplayer.top < boundobject.top) &&
				(boundplayer.top + boundplayer.height < boundobject.top + boundobject.height) &&
				(boundplayer.left < boundobject.left + boundobject.width) &&
				(boundplayer.left + boundplayer.width > boundobject.left)) {
				//velocityX = 0;
				A.setPosition(boundplayer.left, boundobject.top - boundplayer.height);
			}

			//Top Collision
			else if ((boundplayer.top > boundobject.top) &&
				(boundplayer.top + boundplayer.height > boundobject.top + boundobject.height) &&
				(boundplayer.left < boundobject.left + boundobject.width) &&
				(boundplayer.left + boundplayer.width > boundobject.left)) {
				//velocityX = 0;
				A.setPosition(boundplayer.left, boundobject.top + boundobject.height);
			}
		}



	}

}