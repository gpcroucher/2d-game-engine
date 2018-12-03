#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

class Renderer
{
public:
	std::unique_ptr<sf::RenderWindow> pWindow;

	Renderer();
	Renderer(sf::RenderWindow renderWindow);
	~Renderer();

	int RenderShapes(std::vector<sf::RectangleShape> rectangleList = std::vector<sf::RectangleShape>(),
		std::vector<sf::CircleShape> circleList = std::vector<sf::CircleShape>(),
		std::vector<sf::ConvexShape> convexList = std::vector<sf::ConvexShape>());
	int RenderSprites(std::vector<sf::Sprite> spriteList);
	int RenderText(std::vector<sf::Text> textList);

};

