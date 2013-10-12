/*
 * 2dDisk.h
 *
 *  Created on: Jul 21, 2013
 *      Author: bfoley
 */

#ifndef TWODDISK_H_
#define TWODDISK_H_
#include "myVector.h"

using namespace std;

class twoDDisk : public myVector
{
	//Public members
	public:
		//Constructor(s)
		twoDDisk();
		twoDDisk(double x, double y, double z, double phi);

		myVector _rtd0,_rtd1,_rtd2,_rtd3,_rtd4;	//Position vector and its higher order time derivatives
		myVector _force;	//Force vector, has x, y and angular components

		//Access members
		//Position myVector
		myVector getPos();	//Access a static myVector
		//x-position
		double getX();
		void setX(double x);
		//y-position
		double getY();
		void setY(double y);
		//z-position
		double getZ();
		void setZ(double z);
		//Angle
		double getPhi();
		void setPhi(double phi);

		//Velocity myVector
		const myVector & getVelocity();
		//x-velocity
		double getVx();
		//y-velocity
		double getVy();
		//z-velocity
		double getVz();
		//Angular velocity
		double getOmega();

		//Acceleration myVector
		const myVector & getAcceleration();
		//x-acceleration
		double getAx();
		//y-acceleration
		double getAy();
		//z-acceleration
		double getAz();
		//Angular acceleration
		double getTau();

		//Access Particle property members
		//Radius
		double getR();
		//Mass
		double getM();
		//Particle type
		int getType();
		//Material Properties
		double & getMu();
		double & getGamma();
		double & getYM();
		double & getA();
		//Coordination number
		double getZNum();

	//private:
		//Properties
		double _r;	//Radius
		double _m;	//Mass
		double _J;	//Moment of Inertia
		int _z;		//Coordination Number
		int _type;	//Type of particle
		double _mu,_gamma,_Y,_A;//Material properties
};
#endif /* TWODDISK_H_ */
