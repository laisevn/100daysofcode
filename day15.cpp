////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics/Glyph.hpp>
#include <iostream>

sf::Vector2f viewSize(256, 224);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Where is My Beer", sf::Style::Default);

////////////////////////////////////////////////////////////
// Sprites
////////////////////////////////////////////////////////////
//background
sf::Texture bgOfficeTexture;
sf::Sprite bgOfficeSprite;
//background-floor
sf::Texture bgFloorTexture; 
sf::Sprite bgFloorSprite;


void init() {
	if (!bgOfficeTexture.loadFromFile("backgroun-pixel-clouds.png")) {

		std::cerr << "Error loading background-pixel-clouds.png" << std::endl;

		exit(EXIT_FAILURE);
	}
	bgOfficeSprite.setTexture(bgOfficeTexture);

	bgFloorTexture.loadFromFile("backgroun-floor.png");
	bgFloorSprite.setTexture(bgFloorTexture);
}

void draw() {
	window.draw(bgOfficeSprite);
	window.draw(bgFloorSprite);
}

int main() {
	init();

	while (window.isOpen())
	{
		window.clear(sf::Color::Red);
		draw();

		window.display();
	}

	return 0;
}

