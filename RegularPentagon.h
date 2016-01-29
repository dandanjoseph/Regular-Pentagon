/*
 * File:   RegularPentagon.h
 * Author: Joseph Dandan
 *
 * This program is used to calculate the area perimeter of a regular pentagon
 */

#ifndef REGULARPENTAGON_H
#define	REGULARPENTAGON_H

#include "GeometricObject.h"

class RegularPentagon : public GeometricObject {
	//this line above states that we are working with stuff Geometric Object
public:
    RegularPentagon(double sideArg, string name ="Regular Pentagon");
    //the method Regular Pentagon takes in a side argument and has a string name set to Regular Pentagon
    double getArea();
    //we have a getter for the area
    double getPerimeter();
    //this is a getter for the perimeter
    double getSide();
    //this is a getter for the side

private:
    double side;
    //we have a variable of double type for the side

};

#endif	/* SQUARE_H */
