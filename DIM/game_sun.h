#pragma once
#include "game_object.h"
#include <sddl.h>
class SunObject : public GameObject {
public:
	static const int FRAMES = 3;
private:
	const int frameskip = 60;
	SDL_Rect frames[FRAMES];
	int frameCounter = 0;
	int currentFrame = 0;
public:
	SunObject(SDL_Surface* srf);
	SDL_Rect* getRect();
};