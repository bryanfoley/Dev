/*
 * myVector.cpp
 *
 *  Created on: Jul 21, 2013
 *      Author: bfoley
 */
#include "myVector.h"
#include <iostream>
#include <fstream>

		//Explicit constructor
		myVector::myVector(double x, double y, double z, double phi): _x(x), _y(y), _z(z), _phi(phi){};

		//Get private members
		double myVector::getX() {return _x;}
		double myVector::getY() {return _y;}
		double myVector::getZ() {return _z;}
		double myVector::getPhi() {return _phi;}

		//Set private members
		void myVector::setX(double x) {_x = x;}
		void myVector::setY(double y) {_y = y;}
		void myVector::setZ(double z) {_z = z;}
		void myVector::setPhi(double phi) {_phi = phi;}

		//Overloaded binary operators
		//Addition
		myVector & myVector::operator += (const myVector & p){
			_x += p._x; _y += p._y; _z += p._z; _phi += p._phi;
			return *this;
		}

		//Subtraction
		myVector & myVector::operator -= (const myVector & p){
			_x -= p._x; _y -= p._y; _z -= p._z; _phi -= p._phi;
			return *this;
		}

		//Multiplication by a scalar
		myVector & myVector::operator *= (double c){
			_x *= c; _y *= c; _z *= c; _phi *= c;
			return *this;
		}
