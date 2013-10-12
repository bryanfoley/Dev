//============================================================================
// Name        : 2dCompact.cpp
// Author      : BFOL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "defines.h"
#include "includes.h"

using namespace std;

int main( void );

int main( void ) {
	//int sizeOf = 10000;
	cout << "Hello World!!!" << endl; // prints Hello World!!!

	//Create
/*Test code
	float *p_system, system[10000];		//The System of particles and its Pointer variable
	p_system = system;					//Assignation
*/

	twoDDisk *p_system, system[10];
	p_system = system;


	initializeTo(p_system, 10, 12.3333);
	dumpSystemToFile(p_system,10);
	errorLog(AT, "Fake error");
	initializeTo(p_system, 10, 2.0);
	sleepNow(1000000);
	dumpSystemToFile(p_system,10);

	return 0;
}

