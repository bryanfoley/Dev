//============================================================================
// Name        : 2dCompact.cpp
// Author      : BFOL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include "defines.h"
#include "includes.h"

using namespace std;

int main( void );

int main( void ) {
	cout << "Hello World!!!" << endl; // prints Hello World!!!

	//Create
	float *p_system, system[10000];		//The System of particles and its Pointer variable
	p_system = system;					//Assignation

	dumpToFile fileDumper;

	initializeTo(p_system, 10000, 1.0);
	fileDumper.dumpSystemToFile(p_system,10000);
	initializeTo(p_system, 10000, 2.0);
	fileDumper.sleepNow(1000000);
	fileDumper.dumpSystemToFile(p_system,10000);

	return 0;
}

