#include "Player.h"



Player::Player()
{
}

Player::Player(SDL_Texture * INIT_TEXT)
{
	playerTexture = INIT_TEXT;
}

void Player::init_Rect(SDL_Rect & rect, int x, int y, int w, int h)
{
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
}

void Player::addScore(int whatToAdd)
{
	score += whatToAdd;
}


Player::~Player()
{
}