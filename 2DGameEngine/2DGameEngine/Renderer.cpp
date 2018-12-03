#include "stdafx.h"
#include "Renderer.h"
#include <SFML/Graphics.hpp>

Renderer::Renderer() 
{
	std::unique_ptr<sf::RenderWindow> GameWindow;
}

Renderer::~Renderer()
{

}

int Renderer::RenderShapes(std::vector<sf::RectangleShape> rectangleList,
	std::vector<sf::CircleShape> circleList,
	std::vector<sf::ConvexShape> convexList)
{
	for (const auto& shape : rectangleList)
	{
		pWindow->draw(shape);
	}
	for (const auto& shape : circleList)
	{
		pWindow->draw(shape);
	}
	for (const auto& shape : convexList)
	{
		pWindow->draw(shape);
	}

	return 0;
}

int Renderer::RenderSprites(std::vector<sf::Sprite> spriteList)
{
	for (const auto& sprite : spriteList) 
	{
		pWindow->draw(sprite);
	}

	return 0;
}

int Renderer::RenderText(std::vector<sf::Text> textList)
{
	for (const auto& text : textList)
	{
		pWindow->draw(text);
	}

	return 0;
}
