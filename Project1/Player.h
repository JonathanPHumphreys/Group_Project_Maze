#pragma once
#include "constants.h"

class Player
{
public:
	Player();
	//functions 
	void init_Rect(SDL_Rect &rect ,int x, int y, int w, int h);
	bool is_colliding(SDL_Rect &, SDL_Rect &);
	void checkRects();

	~Player();
	//variables
	SDL_Texture* playerTexture;
	SDL_Texture* endPoint;
	SDL_Texture* scoreText;
	SDL_Texture* numbersText;
	SDL_Surface* playerSurface;
	SDL_Rect destination;
	SDL_Rect scoreRect = { 5,5, 30, 30 };
	SDL_Rect numberRect0 = { 80,11, 17, 28 };
	SDL_Rect numberRect1 = { 100,11, 17, 28 };//+30
	int score0 = 0;
	int score1 = 0;
	char* numbers[10] = { "0","1","2","3","4","5","6","7","8","9" };//for displaying the player score.
};

