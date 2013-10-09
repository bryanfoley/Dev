/*
 * dumpToFile.cpp

 *
 *  Created on: Oct 6, 2013
 *      Author: bfoley
 */

#include "defines.h"
#include "includes.h"
#include <iostream>
#include <ostream>
#include <fstream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

dumpToFile::dumpToFile()
{
	//Blank Implementation
}

void dumpToFile::sleepNow( int sleepTime )
{
   int curTime = clock(); //get the current time
   while(clock() - curTime < sleepTime){} //wait until the time has passed
}

char * dumpToFile::time_stamp( void )
{
	char filename[LOGNAME_SIZE];
	time_t curtime;
	struct tm *loctimep;

	curtime = time( NULL );
	if ( curtime == -1 )
		{
			fputs( "Calendar time not available\n", stderr );
			exit( EXIT_FAILURE );
		}

	loctimep = localtime( &curtime );
	if ( loctimep == NULL )
	{
		fputs( "Time conversion error\n", stderr );
		exit( EXIT_FAILURE );
	}

	if ( strftime( filename, LOGNAME_SIZE,
			SYSTEM_LOGNAME_FORMAT, loctimep ) == 0 )
	{
		fputs( "Generated filename too long\n", stderr );
		exit( EXIT_FAILURE );
	}

	printf( "Generated filename: %s\n", filename );
	//exit( EXIT_SUCCESS );
	return filename;
}

void dumpToFile::dumpSystemToFile( float *p_system, int sizeOfSystem )
{
	time_t curtime;
	struct tm *loctimep;
	loctimep = localtime( &curtime );
	char * name;
	(std::string)name = (std::string)time_stamp();
	std::strftime(name, LOGNAME_SIZE,
	SYSTEM_LOGNAME_FORMAT, loctimep);

	ofstream outClientFile;
	outClientFile.open(name, ios::out);

	if( !outClientFile )
	{
		cout << "Failed to dump system to file!!!" << "\n";
	}
	for ( int i = 0; i < sizeOfSystem; )
	{
		outClientFile << *p_system << "\n";
		i++;
		++p_system;
	}
	outClientFile.close();
}
