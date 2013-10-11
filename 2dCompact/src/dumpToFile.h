/*
 * dumpToFile.h
 *
 *  Created on: Oct 6, 2013
 *      Author: bfoley
 */

#ifndef DUMPTOFILE_H_
#define DUMPTOFILE_H_

#include "defines.h"
#include "includes.h"
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

class dumpToFile
{
	public:
		//Constructor
		dumpToFile( void );
		//Public member functions
		void sleepNow( int );
		char *time_stamp( void );
		void dumpSystemToFile( twoDDisk *, int );
};

#endif /* DUMPTOFILE_H_ */
