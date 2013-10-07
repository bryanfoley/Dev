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

void dumpDataToFile(float *, int);
FILE *logFile(void);
char *time_stamp(void);
char * time_stamp02(void);

#endif /* DUMPTOFILE_H_ */
