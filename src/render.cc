#include "render.h"

Render::Render()
{
	window = new sf::RenderWindow(sf::VideoMode(800, 600), "Murkaz");
	sf::Image img;
	if(!img.LoadFromFile("../assets/images/background.png"))
		exit(1);
	sf::Sprite* sth = new sf::Sprite(img);
	things.push_back(sth);
}

Render::~Render()
{
	delete window;
	for(size_t i = 0; i < things.size(); ++i)
		delete things[i];
}

void Render::draw()
{
	window->Clear();
	for(size_t i = 0; i < things.size(); ++i)
		window->Draw(*things[i]);
	window->Display();
}

bool Render::isOpen()
{
	return window->IsOpened();
}

bool Render::getEvent(sf::Event &evt)
{
	return window->GetEvent(evt);
}

void Render::close()
{
	window->Close();
}	
