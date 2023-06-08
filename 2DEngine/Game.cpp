#include "Game.h"

// Constructors & Destructors
Game::Game() {
	this->initVars();
	this->initWindow();
}

Game::~Game() {
	delete this->window;
}

// Functions
void Game::initVars() {
	this->window = nullptr;
}

void Game::initWindow() {
	this->videoMode.width = 800;
	this->videoMode.height = 600;

	this->window = new sf::RenderWindow(this->videoMode, "2D Engine Test - V0.1.0", sf::Style::Titlebar | sf::Style::Close);
}

// Checks for events (keyboard clicks and such)
void Game::pollEvents() {
	while (this->window->pollEvent(this->event)) {
		switch (this->event.type) {

		case sf::Event::Closed:
			this->window->close();
			break;

		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Escape) {
				this->window->close();
			}
			break;
		}
	}
}

// Updates the game logic each frame
void Game::update() {
	this->pollEvents();
}

// Renders each object to the frame
void Game::render() {
	// Clears the frame in preperation for next frame
	this->window->clear(sf::Color(255, 0, 255, 255));

	// Displays the rendered frame
	this->window->display();
}

// Accessors
const bool Game::isWindowOpen() const {
	return this->window->isOpen();
}
