/*
 * initSystem.cpp

 *
 *  Created on: Oct 6, 2013
 *      Author: bfoley
 */

#include "initSystem.h"
#include<iostream>
#include<fstream>

void initializeTo (float *p_system, int sizeOfSystem, float val)
{
	for (int i = 0; i < sizeOfSystem;)
	{
		//*p_system[i].twoDDisk(1.0,1.0,1.0,1.0);
		//*p_system[i].setPhi(1.0);
		*p_system = val;
		i++;
		++p_system;
	}
}

void initializeToRand (float *p_system, int sizeOfSystem)
{
	for (int i = 0; i < sizeOfSystem;)
	{
		//*p_system[i].twoDDisk(1.0,1.0,1.0,1.0);
		//*p_system[i].setPhi(1.0);
		//*p_system = rand(5);
		i++;
		++p_system;
	}
}
