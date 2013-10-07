//============================================================================
// Name        : 2dCompact.cpp
// Author      : BFOL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "defines.h"
#include "includes.h"

using namespace std;

int main();

int main() {
	cout << "Hello World!!!" << endl; // prints Hello World!!!

	//Create
	float *p_system, system[10000];		//The System of particles and its Pointer variable
	p_system = system;					//Assignation

	initializeTo(p_system, 10000, 1.0);
	dumpDataToFile(p_system,10000);
//	initializeTo(p_system, 10000, 2.0);
//	dumpDataToFile(p_system,10000);
	//initializeToRand(p_system, 10000);
	//Need a function here to dump to file
	return 0;
}

