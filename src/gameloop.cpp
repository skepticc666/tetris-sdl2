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

        drawgrid();

        SDL_RenderPresent(render);
    }
}



void gameloop::drawgrid()
{

    
    
    for(int i = 0 ; i < rowNum ; i++){
        for(int j = 0; j < colNum ; j++){
            // grid[i][j] = 0 ;
            gridBoxes[i][j].x = i*gridBoxes[i][j].w;
            gridBoxes[i][j].y = j*gridBoxes[i][j].h;
            gridBoxes[i][j].w = width/10;
            gridBoxes[i][j].h = height/20;
            SDL_SetRenderDrawColor(render , 255 , 255 , 255 , 255);
            SDL_RenderDrawRect(render , &gridBoxes[i][j]); 
            // std::cout << "drawing" << std::endl;
        }
    }
}
