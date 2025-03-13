#define SDL_MAIN_HANDLED
#include <iostream>
#include  <SDL2/SDL.h>
#include <initialise.h>
#include <gameloop.h>

int main(){

    initilise_window renderit;
    renderit.windowrender();


    gameloop gamecontrol;
    gamecontrol.window = renderit.window;
    gamecontrol.render = renderit.render;
    gamecontrol.gamerunning();
    
}

