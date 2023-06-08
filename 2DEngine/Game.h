#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

/*
	A Game Engine Class
	This acts as the backbone of the 2DEngine project.
*/


class Game {
private:
	//Variables
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	// Functions
	void initVars();
	void initWindow();

public:
	// Constructors & Destructors
	Game();
	virtual ~Game();

	// Function Prototypes
	void pollEvents();
	void update();
	void render();

	// Accessors
	const bool isWindowOpen() const;
};

