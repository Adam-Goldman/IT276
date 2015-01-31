#include<SDL.h>


long game_time = 0;
long delta = 0;
void input(); //takes in player input
void update(); //this will update game world
void draw();	/// draws the screen


int main(int argc, char* argv[])
{
	long last_time;
	SDL_Surface* screen;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE| SDL_FULLSCREEN);
	//begining of game loop
	while(true)
	{
		last_time = game_time;
		game_time = SDL_GetTicks();
		delta = last_time - game_time;
		input();
		update();
		draw();
		if(delta < 17)
		{
			SDL_Delay(17 - delta);
		}
	}
	// end of game loop
	SDL_Quit();
	return 0;
}