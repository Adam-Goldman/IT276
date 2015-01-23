#include<SDL.h>



int main(int argc, char* argv[])
{
	SDL_Surface* screen;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE| SDL_FULLSCREEN);
	SDL_Delay(6000);
	SDL_Quit();
	return 0;
}