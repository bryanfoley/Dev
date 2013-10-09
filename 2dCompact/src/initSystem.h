/*
 * initSystem.h
 *
 *  Created on: Oct 6, 2013
 *      Author: bfoley
 */

#ifndef INITSYSTEM_H_
#define INITSYSTEM_H_

#include "defines.h"
#include "includes.h"
#include<iostream>
#include<fstream>

void initializeTo ( float *, int, float );		//A function which initializes the system to val
void initializeToRand ( float *, int );		//A function which initializes the system to all random values
float sampleNormal ( void );

#endif /* INITSYSTEM_H_ */
