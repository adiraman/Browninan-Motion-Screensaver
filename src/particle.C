/*
 * =====================================================================================
 *
 *       Filename:  particle.C
 *
 *    Description:  source file for class particle
 *
 *        Version:  2.0
 *        Created:  03/26/2017 06:33:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aditya Raman
 *
 * =====================================================================================
 */

#include "particle.H"

namespace bakar
{
    particle::particle():m_x(0.0), m_y(0.0)
    {
        m_x = ((2.0*rand())/RAND_MAX) - 1.0;
        m_y = ((2.0*rand())/RAND_MAX) - 1.0;

        m_xSpeed = ((2.0*rand())/RAND_MAX - 1.0)*0.001;
        m_ySpeed = ((2.0*rand())/RAND_MAX - 1.0)*0.001;
    }

    particle::~particle()
    {

    }

    void particle::updateParticle(int interval)
    {
        if(m_x <= -1 || m_x >= 1)
        {
            m_xSpeed = -m_xSpeed;
        }

        if(m_y <= -1 || m_y >= 1)
        {
            m_ySpeed = -m_ySpeed;
        }

        m_x += m_xSpeed*interval;
        m_y += m_ySpeed*interval;

    }
}

