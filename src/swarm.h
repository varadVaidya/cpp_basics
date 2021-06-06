#ifndef SWARM_H_
#define SWARM_H_

#include "particle.h"

namespace basicSDL{

    class Swarm{


        private:
        Particle *m_particle;


        public:

        const static int NPARTICLES = 1000;
        Swarm();
        virtual ~Swarm();
        void update();

        const Particle * getParticle() { return m_particle; }
    };
}


#endif