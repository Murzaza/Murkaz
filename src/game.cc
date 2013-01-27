#include "game.h"

Game::Game()
{
	return;
}

Game::~Game()
{
	return;
}

void Game::begin()
{
	while(render.isOpen())
	{
		render.draw();
		sf::Event Event;
		while(render.getEvent(Event))
		{
			if((Event.Type == sf::Event::Closed) ||
				((Event.Type == sf::Event::KeyPressed)
				&& (Event.Key.Code == sf::Key::Escape)))
			{
			render.close();
			break;
			}
		}
	}
}
