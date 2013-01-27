#ifndef __RENDER_H__
#define __RENDER_H__

#include <SFML/Graphics.hpp>
#include <vector>

class Render
{
private:
	sf::RenderWindow *window;
	std::vector<sf::Sprite*> things;

public:
	Render();
	~Render();
	void draw();
	bool isOpen();
	bool getEvent(sf::Event &evt);
	void close();
};
#endif
