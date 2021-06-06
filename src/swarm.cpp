#include "swarm.h"

namespace basicSDL{

    Swarm::Swarm(){

        m_particle = new Particle[NPARTICLES];

    }

    Swarm::~Swarm(){
        delete[] m_particle;
    }

    void Swarm::update(){
        for (int i=0; i<Swarm::NPARTICLES;i++){
            m_particle[i].update();

        }
    }
}