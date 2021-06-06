#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace basicSDL{
    class Particle
    {
        public:
            double m_x;
            double m_y;

            double m_xspeed;
            double m_yspeed;

        public:
        Particle();
        void update();


    };





}



#endif
