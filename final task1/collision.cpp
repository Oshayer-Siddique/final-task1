#include "collision.h"

Collision::Collision() {
	
}

void Collision::collision_chk(Sprite& A, vector<Sprite>& B) {
	FloatRect nextPos;

	FloatRect boundplayer = A.getGlobalBounds();

	for (int i = 0;i < 50;i++) {

		

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

				//cout << "Yes" << endl;
			}
			//Left Collision

			else if ((boundplayer.left > boundobject.left) &&
				(boundplayer.left + boundplayer.width > boundobject.left + boundobject.width) &&
				(boundplayer.top < boundobject.top + boundobject.height) &&
				(boundplayer.top + boundplayer.height > boundobject.top)) {

				//velocityX = 0;
				A.setPosition(boundobject.left + boundobject.width, boundplayer.top);

				//cout << "Yes" << endl;

			}

			// Bottom Collision

			else if ((boundplayer.top < boundobject.top) &&
				(boundplayer.top + boundplayer.height < boundobject.top + boundobject.height) &&
				(boundplayer.left < boundobject.left + boundobject.width) &&
				(boundplayer.left + boundplayer.width > boundobject.left)) {
				//velocityX = 0;
				A.setPosition(boundplayer.left, boundobject.top - boundplayer.height);

				//cout << "Yes" << endl;
			}

			//Top Collision
			else if ((boundplayer.top > boundobject.top) &&
				(boundplayer.top + boundplayer.height > boundobject.top + boundobject.height) &&
				(boundplayer.left < boundobject.left + boundobject.width) &&
				(boundplayer.left + boundplayer.width > boundobject.left)) {
				//velocityX = 0;
				A.setPosition(boundplayer.left, boundobject.top + boundobject.height);

				//cout << "Yes" << endl;
			}
		}



	}

}

int Collision::collision_chk_S(Sprite& X, Sprite& Y) {
	FloatRect rect1 = X.getGlobalBounds();
	FloatRect rect2 = Y.getGlobalBounds();

	if (rect1.intersects(rect2)) {
		return 1;
	}
	else {
		return 0;
	}
	


}

//void Collision::collision_chk_rectangle(RectangleShape& U, vector<Sprite>& V) {
//
//	FloatRect nextPos;
//
//	FloatRect boundplayer = U.getGlobalBounds();
//
//	
//
//	for (int i = 0;i < 50;i++) {
//
//
//
//		FloatRect boundobject = V[i].getGlobalBounds();
//
//		nextPos = boundplayer;
//		//nextPos.left += velocityX;
//		//nextPos.top += velocityX;
//		if (boundobject.intersects(nextPos)) {
//			if (boundplayer.top + boundplayer.height <= boundobject.top + 20 &&
//				(boundplayer.left < boundobject.left + boundobject.width) &&
//				(boundplayer.left + boundplayer.width > boundobject.left)) {
//				//velocityX = 0;
//				U.setPosition(U.getPosition().x, U.getPosition().y - 3);
//
//
//			}
//
//
//
//
//			
//		}
//
//
//
//	}
//		
//
//}