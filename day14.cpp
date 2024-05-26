#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Font.hpp>
#include "SFML/Window.hpp"
#include "SFML/Window/Event.hpp"
#include <iostream>
#include <Windows.h>


sf::Vector2f viewSize(256, 224);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Game !!!",
sf::Style::Default);
sf::Vector2f playerPosition;

bool playerMoving = false;

sf::Texture skyTexture;
sf::Sprite skySprite;
sf::Texture bgTexture;
sf::Sprite bgSprite;

void init()
{

    skyTexture.loadFromFile("backgroun-pixel-clouds.png");
    skySprite.setTexture(skyTexture);
    bgTexture.loadFromFile("backgroun-floor.png");
    bgSprite.setTexture(bgTexture);
    
}

void updateInput() {
    sf::Event event;

    while (window.pollEvent(event))
    {
        if (event.key.code == sf::Keyboard::Escape || event.type == sf::Event::Closed)
        {
            window.close();
        }
    }
}

void update(float dt) {}

void draw() { 
    window.draw(skySprite);   
    window.draw(bgSprite);
}

int main() { 
    sf::Clock clock;  
    window.setFramerateLimit(60);   
    
    init();   
    
    while (window.isOpen()) { 
        updateInput();      
        
        sf::Time dt = clock.restart();      
        update(dt.asSeconds());      
                
        draw();      
        
        window.display(); 
    }   
    return 0; 
}
