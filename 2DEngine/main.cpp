#include <iostream>
#include "Game.h"

int main() {
	// Creating our game engine object
	Game game;

	while (game.isWindowOpen()) {
		game.update();

		game.render();
	}

	return 0;
}