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
#include<ctime>

void dumpDataToFile(float *p_system, int sizeOfSystem)
{
	time_t curtime;
	struct tm *loctimep;
	loctimep = localtime( &curtime );
	char * name = time_stamp02();
	std::strftime(name, LOGNAME_SIZE,
	"DUMP_%m%d%Y_%H%M%S", loctimep);
	ofstream outClientFile;
	outClientFile.open(name, ios::out);
	if(!outClientFile)
	{
		cout << "Failed to dump!!!" << "\n";
	}
	for (int i = 0; i < sizeOfSystem;)
	{
		outClientFile << *p_system << "\n";
		i++;
		++p_system;
	}
	outClientFile.close();
}

char * time_stamp02(void)
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

/*if ( strftime( filename, LOGNAME_SIZE,
"DUMP_%m%d%Y_%H%M%S", loctimep ) == 0 )
{
fputs( "Generated filename too long\n", stderr );
exit( EXIT_FAILURE );
}*/

printf( "Generated filename: %s\n", filename );
//exit( EXIT_SUCCESS );
return filename;
}
