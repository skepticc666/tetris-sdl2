#pragma once
#include <SDL2/SDL.h>
#include <iostream>


class gameloop 
{
    bool running;
    public:
    SDL_Window* window;
    SDL_Renderer* render;
    SDL_Event e;

    public:

    void gamerunning();
};