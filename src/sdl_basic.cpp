#include <iostream>
#include <SDL2/SDL.h>
#include "screen.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "swarm.h"

using namespace std;

int main(){


    srand(time(NULL));

    basicSDL::Screen graphics;

    if (graphics.init() == false)
    {
        cout << "Warning. Error initialization SDL" << endl;
    }

    basicSDL::Swarm swarm;



    while (true){
        // Update particles

        int elapsed = SDL_GetTicks();
        //cout << "Fuck" << endl;
        graphics.update();
        swarm.update();

        unsigned char red = (1 + sin(elapsed * 0.0007)) * 128;
        unsigned char green = (1 + cos(elapsed * 0.0005)) * 128;
        unsigned char blue = (1 + sin(elapsed * 0.0009)) * 128;


        // for(int y=0; y< graphics.SCREEN_HEIGHT; y++)
        // {
        //     for (int x=0; x < graphics.SCREEN_WIDTH; x++)
        //     {
        //         graphics.setPixel(x,y,red,green,blue);
        //     }
        // }
        graphics.clear();
        
        const basicSDL::Particle *const pParticle = swarm.getParticle();
        for (int i=0;i<basicSDL::Swarm::NPARTICLES;i++){
            
            basicSDL::Particle particle = pParticle[i];

            int x = (particle.m_x + 1) * graphics.SCREEN_WIDTH/2;
            int y = (particle.m_y + 1) * graphics.SCREEN_WIDTH/2;

            graphics.setPixel(x,y,red,green,blue);

        }
        //graphics.setPixel(400,300,255,255,255);

        graphics.update();


        if (graphics.processEvents() == false)
        {
            break;
        }
        
    }

    graphics.close();

    return 0;
} 