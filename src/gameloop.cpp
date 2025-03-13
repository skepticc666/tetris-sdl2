#include <iostream>
#include <gameloop.h>
#include <SDL2/SDL.h>
#include "initialise.h"
 
    


void gameloop::gamerunning()
{
    while(running)
    {

        while(SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT)
            {
                running = false;
            }
        }
        //for window
        SDL_SetRenderDrawColor(render , 0 , 0 , 0 ,255);
        SDL_RenderClear(render);

        SDL_RenderPresent(render);
    }
}
