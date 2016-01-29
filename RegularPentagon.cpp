/*
 * File:   RegularPentagon.cpp
 * Author: Joseph Dandan
 *
 * This program calculates the area and perimeter of a regular pentagon
 */

#include "RegularPentagon.h"
#include <cmath>

RegularPentagon::RegularPentagon(double sideArg, string name) : GeometricObject (name)
//this method takes in a side argument and can take in a string name as well
{
    side = sideArg;
}
/*This is a getter for the area*/
double RegularPentagon::getArea(){
    return (0.25) * sqrt (5* ( 5 + 2* sqrt (5) ))*side*side;
    //we calculate the area with the formula that is being returned for the area
}
/*This is a getter for the perimeter*/
double RegularPentagon::getPerimeter() {
    return 5 * side;
    //we calculate the perimeter with the side
}
/*This is a getter for the side*/
double RegularPentagon::getSide() {
    return side;
    //we get the side and return the side
}
