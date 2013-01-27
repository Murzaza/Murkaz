#ifndef __GAME_H_
#define __GAME_H_

#include "render.h"

class Game
{
private:
	Render render;

public:
	Game();
	~Game();
	void begin();
	//void end(); Not sure if I need this.
};
#endif
