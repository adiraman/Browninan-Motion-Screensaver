/*
 * =====================================================================================
 *
 *       Filename:  particle.H
 *
 *    Description:  Include file for particle class
 *
 *        Version:  2.0
 *        Created:  03/26/2017 06:32:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aditya Raman
 *
 * =====================================================================================
 */

#ifndef PARTICLE_H
#define PARTICLE_H

#include <stdlib.h>

namespace bakar
{
    struct particle
    {
        double m_x;
        double m_y;
        double m_xSpeed;
        double m_ySpeed;

        public:
            particle();
            ~particle();
            void updateParticle(int interval);
    };
}


#endif
