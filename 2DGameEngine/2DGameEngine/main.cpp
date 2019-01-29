#include "stdafx.h"
#include "Renderer.h"
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	Renderer rend;
	rend.pWindow = std::unique_ptr<sf::RenderWindow>(new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!", sf::Style::Default));
	
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::White);

	// start a clock
	sf::Clock clock;

	// game loop
	while (rend.pWindow->isOpen())
	{
		sf::Event event;
		while (rend.pWindow->pollEvent(event))
		{
			switch (event.type) 
			{
				case sf::Event::Closed:
					rend.pWindow->close();
					break;
				case sf::Event::Resized:
					// resize graphics
					break;
				case sf::Event::LostFocus:
					// pause game
					break;
				case sf::Event::KeyPressed:
					// check key
					break;
				case sf::Event::TextEntered:
					// for typing in a text field
					break;
				default:
					break;
			}
		}

		rend.pWindow->clear();

		// test
		sf::RectangleShape rect = sf::RectangleShape(sf::Vector2f(100.f, 100.f));
		rect.setFillColor(sf::Color::Green);
		std::vector<sf::RectangleShape> v = { rect };
		rend.RenderShapes (v);
		// rend.RenderSprites();
		// rend.RenderText();

		// window.draw(shape);
		rend.pWindow->display();

		std::cout << "Elapsed time since last frame: " << clock.getElapsedTime().asMicroseconds() << std::endl;
		// restart clock
		clock.restart();
	}
}