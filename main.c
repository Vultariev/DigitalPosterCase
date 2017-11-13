#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <curl/curl.h>
#include "SDL2/SDL.h"

int main(void)
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* win = SDL_CreateWindow("Poster",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,1366,768,SDL_WINDOW_FULLSCREEN);

    SDL_Event event;

    SDL_Renderer *ren = SDL_CreateRenderer(win,-1,SDL_RENDERER_ACCELERATED);

    bool running = true;

    while(running)
    {
        while(SDL_PollEvent(&event))  //Grabs sdl events like mouse movements, keystrokes, etc.
        {
            if(event.type == SDL_QUIT)
            {
                running = false;
            }
        }
    }

    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
