/*
 * myVector.h
 *
 *  Created on: Jul 21, 2013
 *      Author: bfoley
 */

#ifndef MYVECTOR_H_
#define MYVECTOR_H_

#include<iostream>
#include<math.h>
using namespace std;

class myVector
{
	//Friend overloaded binary functions
	friend istream & operator >> (istream & is, myVector & v)
	{
		is >> v._x >> v._y >> v._z >> v._phi;
		return is;
	}

	friend ostream & operator << (ostream & os, const myVector & v)
	{
		os << v._x << " " << v._y << " " << v._z << " " << v._phi;
		return os;
	}
	//myVector addition
	friend myVector operator + (const myVector & v1, const myVector & v2)
	{
		myVector res(v1);
		res+=v2;
		return res;
	}

	//myVector subtraction
	friend myVector operator - (const myVector & v1, const myVector & v2)
	{
		myVector res(v1);
		res-=v2;
		return res;
	}

	//Scalar multiplication
	friend myVector operator * ( double c, const myVector & p )
	{
		myVector res=p;
		res *= c;
		return res;
	}

	friend myVector operator * ( const myVector & p, double c )
	{
		return c*p;
	}

	//Public---------------------------------------------
	public:
		//Explicit constructor
		myVector( double x=0, double y=0, double z=0, double phi=0 );
		//Get member functions
		double getX( void );
		double getY( void );
		double getZ( void );
		double getPhi( void );

		//Set member functions
		void setX( double x );
		void setY( double y );
		void setZ( double z );
		void setPhi( double phi );

		//Overloaded binary operators
		//Addition
		myVector & operator += ( const myVector & p );

		//Subtraction
		myVector & operator -= ( const myVector & p) ;

		//Multiplication by a scalar
		myVector & operator *= ( double c );

	private:
		double _x;		//x-component
		double _y;		//y-component
		double _z;		//z-component
		double _phi;	//angular-component
};
const myVector null(0,0,0,0);
#endif /* MYVECTOR_H_ */
