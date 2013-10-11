/*
 * initSystem.cpp

 *
 *  Created on: Oct 6, 2013
 *      Author: bfoley
 */

#include "initSystem.h"
#include <iostream>
#include <fstream>
#include <random>
#include <math.h>

void initializeTo ( twoDDisk *p_system, int sizeOfSystem, double val )
{
	for ( int i = 0; i < sizeOfSystem; )
	{
		//*p_system[i].twoDDisk(1.0,1.0,1.0,1.0);
		//*p_system[i].setPhi(1.0);
		//*p_system = val;
		p_system->setX(val);
		i++;
		++p_system;
	}
}

void initializeToRand ( float *p_system, int sizeOfSystem )
{
	for ( int i = 0; i < sizeOfSystem; )
	{
		//*p_system[i].twoDDisk(1.0,1.0,1.0,1.0);
		//*p_system[i].setPhi(1.0);
		*p_system = sampleNormal();
		i++;
		++p_system;
	}
}

float sampleNormal( void )
{
    float u = ((float) rand() / (RAND_MAX)) * 3 - 1;
    float v = ((float) rand() / (RAND_MAX)) * 2 - 1;
    float r = u * u + v * v;
    if (r == 0 || r > 1) return sampleNormal();
    float c = sqrt(-2 * log(r) / r);
    return u * c;
}
