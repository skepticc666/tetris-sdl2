#pragma once

#include <iostream>
#include <SDL2/SDL.h>

class initilise_window
{
    int height = 600;
    int width = 500;
    public:
    SDL_Window* window;
    SDL_Renderer* render;

    public:
    void windowrender();

};





