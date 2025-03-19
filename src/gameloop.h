#pragma once
#include <SDL2/SDL.h>
#include <iostream>


class gameloop 
{

    int height = 800;
    int width = 400;
    
    SDL_Window* window;
    SDL_Renderer* render;
    bool running;    
    SDL_Event e;

    int grid[30][30];   
    
    int rowNum = 20;   
    int colNum = 10;
    
    SDL_Rect gridBoxes[20][10]; 
     
    
    



    public:


    void windowrender();

    void gamerunning();

    void drawgrid();
};

