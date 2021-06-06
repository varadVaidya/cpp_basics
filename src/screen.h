#ifndef screen_h_
#define screen_h_
#include <SDL2/SDL.h>
#include <iostream>

namespace basicSDL {


    class Screen
    {
        private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer;

        public:
        const static int SCREEN_WIDTH =800;
        const static int SCREEN_HEIGHT =600;

        public:

        Screen();
        bool init();
        bool processEvents();
        void close();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        void update();
        void clear();


    };


}
#endif