#include <iostream>
#include <initialise.h>
#include <SDL2/SDL.h>

void initilise_window::windowrender() {
    window = SDL_CreateWindow("window" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , width , height ,0);
    render = SDL_CreateRenderer(window  , -1 , 0);
}


