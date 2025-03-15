#include <iostream>
#include <gameloop.h>
#include <SDL2/SDL.h>

 
    
void gameloop::windowrender() {
    window = SDL_CreateWindow("window" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , width , height ,0);
    render = SDL_CreateRenderer(window  , -1 , 0);


}

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

void gameloop::grid()
{
    rowNum = 20;
    colNum = 10;
     
}

void gameloop::drawgrid()
{
    for(int i = 0 ; i < rowNum ; i++){
        for(int j ; j < colNum ; j++){
            grid[i][j] = 0 ; 
        }
    }
}
