#include "stdafx.h"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!", sf::Style::Default);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	// game loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type) 
			{
				case sf::Event::Closed:
					window.close();
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

		window.clear();
		window.draw(shape);
		window.display();
	}
}