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

    int rowNum , colNum;
    int grid[30][30];
    



    public:


    void windowrender();

    void gamerunning();

    void grid();

    void drawgrid();
};