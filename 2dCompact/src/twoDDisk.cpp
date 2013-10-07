/*
 * 2dDisk.cpp
 *
 *  Created on: Jul 21, 2013
 *      Author: bfoley
 */
#include "twoDDisk.h"
#include "myVector.h"
#include<iostream>
#include<fstream>

		//Constructor(s)
		twoDDisk::twoDDisk():_rtd0(null),_rtd1(null),_rtd2(null),_rtd3(null),_rtd4(null){};
		twoDDisk::twoDDisk(double x, double y, double z, double phi):_rtd0(x,y,z,phi){};

		//Position myVector
		myVector twoDDisk::getPos(){return _rtd0;}	//Access a static myVector
		//x-position
		double twoDDisk::getX(){return _rtd0.getX();}
		void twoDDisk::setX(double x){_rtd0.setX(x);}
		//y-position
		double twoDDisk::getY(){return _rtd0.getY();}
		void twoDDisk::setY(double y){_rtd0.setY(y);}
		//z-position
		double twoDDisk::getZ(){return _rtd0.getZ();}
		void twoDDisk::setZ(double z){_rtd0.setZ(z);}
		//Angle
		double twoDDisk::getPhi(){return _rtd0.getPhi();}
		void twoDDisk::setPhi(double phi){_rtd0.setPhi(phi);}

		//Velocity myVector
		const myVector & twoDDisk::getVelocity(){return _rtd1;}
		//x-velocity
		double twoDDisk::getVx(){return _rtd1.getX();}
		//y-velocity
		double twoDDisk::getVy(){return _rtd1.getY();}
		//z-velocity
		double twoDDisk::getVz(){return _rtd1.getZ();}
		//Angular velocity
		double twoDDisk::getOmega(){return _rtd1.getPhi();}

		//Acceleration myVector
		const myVector & twoDDisk::getAcceleration(){return _rtd2;}
		//x-acceleration
		double twoDDisk::getAx(){return _rtd2.getX();}
		//y-acceleration
		double twoDDisk::getAy(){return _rtd2.getY();}
		//z-acceleration
		double twoDDisk::getAz(){return _rtd2.getZ();}
		//Angular acceleration
		double twoDDisk::getTau(){return _rtd2.getPhi();}

		//Particle properties
		//Radius
		double twoDDisk::getR(){return _r;}
		//Mass
		double twoDDisk::getM(){return _m;}
		//Particle type
		int twoDDisk::getType(){return _type;}
		//Material Properties
		double & twoDDisk::getMu(){return _mu;}
		double & twoDDisk::getGamma(){return _gamma;}
		double & twoDDisk::getYM(){return _Y;}
		double & twoDDisk::getA(){return _A;}
		//Coordination number
		double twoDDisk::getZNum(){return _z;}

		//Functions that operate on the _force myVector of a particle
		/*void predict(double dt);
		void add_force(const myVector & f) {_force+=f;}
		void correct(double dt);
		void set_force_to_zero() {_force=null;}
		void boundary_conditions(int n, double dt, double t);

		//Other functions
		void inc_coordination_number() {_z+=1;}
		void reset_coordination_number() {_z=0;}
		double kinetic_energy() const;
		double linear_momentum() const;
		double angular_momentum() const;*/



