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
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstring>


using namespace std;

class myVector;
class twoDDisk;

void sleepNow( int );
char *time_stamp( void );
void dumpSystemToFile( twoDDisk *, int );
void errorLog( const char *, const char * );
istream & operator >> (istream &, twoDDisk &);
ostream & operator << (ostream &, const twoDDisk &);


istream & operator >> (istream & is, twoDDisk & v)
{
	is >> v._x >> v._y >> v._z >> v._phi;
	return is;
}

ostream & operator << (ostream & os, const twoDDisk & v)
{
	os << v._rtd0._x << " " << v._rtd0._y << " " << v._rtd0._z << " " << v._rtd0._phi;
	return os;
}

void sleepNow( int sleepTime )
{
   int curTime = clock(); //get the current time
   while(clock() - curTime < sleepTime){} //wait until the time has passed
}

char * time_stamp( int flag )
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

	switch(flag)
	{
		case 0:
			if ( strftime( filename, LOGNAME_SIZE,
				SYSTEM_LOGNAME_FORMAT, loctimep ) == 0 )
				{
					fputs( "Generated filename too long\n", stderr );
					exit( EXIT_FAILURE );
				}
			break;
		case 1:
			if ( strftime( filename, LOGNAME_SIZE,
				ERROR_LOGNAME_FORMAT, loctimep ) == 0 )
				{
					fputs( "Generated filename too long\n", stderr );
					exit( EXIT_FAILURE );
				}
			break;
		case 2:
			if ( strftime( filename, LOGNAME_SIZE,
				DATA_LOGNAME_FORMAT, loctimep ) == 0 )
				{
					fputs( "Generated filename too long\n", stderr );
					exit( EXIT_FAILURE );
				}
			break;
		case 3:
			if ( strftime( filename, LOGNAME_SIZE,
				CONF_LOGNAME_FORMAT, loctimep ) == 0 )
				{
					fputs( "Generated filename too long\n", stderr );
					exit( EXIT_FAILURE );
				}
			break;
	}
	printf( "Generated filename: %s\n", filename );
	//exit( EXIT_SUCCESS );
	return filename;
}

void dumpSystemToFile( twoDDisk *p_system, int sizeOfSystem )
{
	time_t curtime;
	struct tm *loctimep;
	loctimep = localtime( &curtime );
	char * name;
	(std::string)name = (std::string)time_stamp(0);
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
		outClientFile << (&outClientFile,*p_system) << "\n";
		i++;
		++p_system;
	}
	outClientFile.close();
}

void errorLog( const char *location, const char *msg )
{
	time_t curtime;
		struct tm *loctimep;
		loctimep = localtime( &curtime );
		char * name;
		(std::string)name = (std::string)time_stamp(1);
		std::strftime(name, LOGNAME_SIZE,
		ERROR_LOGNAME_FORMAT, loctimep);

		ofstream outClientFile;
		outClientFile.open(name, ios::out);

		if( !outClientFile )
		{
			cout << "Failed to write the error to file!!!" << "\n";
		}

		outClientFile << location << " >>> " << msg << "\n";

		outClientFile.close();
}
#endif /* DUMPTOFILE_H_ */
