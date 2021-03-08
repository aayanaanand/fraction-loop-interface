#include "Fraction.h"
#include <string>
#include <cmath>
using namespace std;

/*
*			Fraction.cpp file
* *************************************
* This file contains all of the function
* definitions, with the exception of
* print(), which is located in main().
*/

Fraction::Fraction() {//default constructor
	numerator = 0;
	denominator = 0;
}

Fraction::Fraction(int i) {//constructor with 1 int
	numerator = i;
	denominator = 1;
}

Fraction::Fraction(double d) {//constructor with 1 double
	string dec = to_string(d);
	int multiply = 0;
	int delim = dec.find('.');//converted double to string, and used the point as a delimiter

	for (int i = delim + 1; i < dec.length() - 4; i++) {//using the delimiter, I created an algorithm for multiplying the fraction in a way that it would only contain whole #s
		d = d * 10;
		multiply++;
	}

	numerator = d;
	denominator = pow(10, multiply);//used cmath for this!
}

Fraction::Fraction(int x, int y) {//constructor with 2 ints
	numerator = x;
	denominator = y;
}

void Fraction::input(int n, int d) {//input function (I changed this to have parameters to make it more convenient for myself).
	numerator = n;
	denominator = d;
}

Fraction Fraction::addedto(Fraction f) {//added to function w/ 1 Fraction parameter
	f.numerator = f.numerator * denominator;
	numerator = numerator * f.denominator;
	f.numerator = f.numerator + numerator;
	f.denominator = f.denominator * denominator;
	return f;
}

Fraction Fraction::subtractedfrom(Fraction f) {//subtracted from function w/ 1 Fraction parameter
	f.numerator = f.numerator * denominator;
	numerator = numerator * f.denominator;
	f.numerator = f.numerator - numerator;
	f.denominator = f.denominator * denominator;
	return f;
}

Fraction Fraction::multiplyby(Fraction f) {//multiplied by function w/ 1 Fraction parameter
	f.numerator = f.numerator * numerator;
	f.denominator = f.denominator * denominator;
	return f;
}

Fraction Fraction::divideinto(Fraction f){//divide into function w/ 1 Fraction parameter
	f.numerator = f.numerator / numerator;
	f.denominator = f.denominator / denominator;
	return f;
}

Fraction Fraction::add2(Fraction x, Fraction y) {//adds 2 fractions to get sum
	int newnum = (x.numerator * y.denominator) + (y.numerator*x.denominator);
	int newden = x.denominator * y.denominator;
	Fraction f(newnum, newden);
	return f;
}

Fraction Fraction::subtract2(Fraction x, Fraction y) {//subtracts 2 fractions to get difference
	int newnum = (x.numerator * y.denominator) - (y.numerator * x.denominator);
	int newden = x.denominator * y.denominator;
	Fraction f(newnum, newden);
	return f;
}

Fraction Fraction::multiply2(Fraction x, Fraction y) {//multiplies 2 fractions to get product
	int newnum = (x.numerator * y.numerator);
	int newden = x.denominator * y.denominator;
	Fraction f(newnum, newden);
	return f;
}

Fraction Fraction::divide2(Fraction x, Fraction y) {//divides 2 fractions to get quotient
	int newnum = (x.numerator * y.denominator);
	int newden = x.denominator * y.numerator;
	Fraction f(newnum, newden);
	return f;
}
