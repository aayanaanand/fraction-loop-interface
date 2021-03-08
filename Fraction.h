#pragma once

/*
*		Fraction.h File
* ******************************
* This file contains the 2 int
* members of the fraction class
* as well as the class's correct
* methods, which are expanded
* in the Fraction.cpp file.
*/

class Fraction
{
	int numerator;
	int denominator;//member variables

public:
	void input(int n, int d);
	void print(Fraction f);//our 2 void functions

	Fraction();
	Fraction(int i);
	Fraction(double d);
	Fraction(int x, int y);//the 4 constructors

	Fraction addedto(Fraction f);
	Fraction subtractedfrom(Fraction f);
	Fraction multiplyby(Fraction f);
	Fraction divideinto(Fraction f);//our single-fraction computation functions

	Fraction add2(Fraction x, Fraction y);
	Fraction subtract2(Fraction x, Fraction y);
	Fraction multiply2(Fraction x, Fraction y);
	Fraction divide2(Fraction x, Fraction y);//our 2-fraction computation functions
};

