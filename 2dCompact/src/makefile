#/bin/sh
all: 2dCompact.exe

2dCompact.exe: 2dCompact.o
	 g++ -o 2dCompact 2dCompact.o myVector.o twoDDisk.o verlet.o -lm -w

2dCompact.o: 2dCompact.cpp
	 g++ -c 2dCompact.cpp myVector.cpp twoDDisk.cpp verlet.cpp -lm -w -std=gnu++11
     
clean:
	 rm 2dCompact.o 2dCompact

run:
	./2dCompact
