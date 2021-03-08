#include <iostream>
#include <string>
#include <cmath>
#include "Fraction.h"
using namespace std;

/*
*				Machine Problem 2 by Aayana Anand
* *************************************************************
* This program revolves around the Fraction class. Each Fraction
* object contains 2 member variables, a numerator and denominator,
* along with several member functions (all viewable in Fraction.h
* and Fraction.cpp). In this file (mp2.cpp) I defined both the
* print() function and created the loop interface in main(). Within
* this loop interface, the program allows the user to input their
* desired fractions and mathematical operation. The program returns
* the correct value and continues the loop until the user decides
* to stop. The program also uses exception handling with invalids.
*/

void Fraction::print(Fraction f) {
	cout << f.numerator << '/';
	cout << f.denominator << endl;//prints the fraction by displaying numerator and denominator separately
}

int main()
{
	Fraction f1(0);
	Fraction f2(0);
	Fraction f3(0);
	int n, d;
	char oper = 'abc';
	while (oper != 'q' && oper!='Q') {//the loop continues as long as the user doesn't enter q or Q
		cout << "Enter 2 fractions (by typing numerators and denominators for both fractions separately) and 1 mathematical operator." << endl;
		cin >> n;
		cin >> d;//inputting user answers
		while (d == 0) {
			cout << "Denominator cannot be 0. Try again" << endl;
			cin >> d;//exception handling with denominator of 0
		}
		f1.input(n, d);
		cin >> n;
		cin >> d;//inputting user answers
		while (d == 0) {
			cout << "Denominator cannot be 0. Try again" << endl;
			cin >> d;//exception handling with denominator of 0
		}
		f2.input(n, d);
		cout << "Please enter mathematical operator [+, -, *, or /] or q/Q to quit" << endl;
		cin >> oper;//inputting user answers
		if (!cin >> oper || oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != 'q' && oper != 'Q')
		{
			cout << "Please enter a valid operator next time" << endl;//exception handling with invalid operator
		}
		if (oper == '+') {//chain of if statements that have specific functions depending on the operator requested by user
			cout << "Fraction 1: ";
			f1.print(f1);
			cout << "Fraction 2: ";
			f2.print(f2);
			Fraction result = result.add2(f1, f2);//obtains result and prints in line below
			cout << "Sum = ";
			result.print(result);
		}
		else if (oper == '-') {
			cout << "Fraction 1: ";
			f1.print(f1);
			cout << "Fraction 2: ";
			f2.print(f2);
			Fraction result = result.subtract2(f1, f2);//obtains result and prints in line below
			cout << "Difference = ";
			result.print(result);
		}
		else if (oper == '*') {
			cout << "Fraction 1: ";
			f1.print(f1);
			cout << "Fraction 2: ";
			f2.print(f2);
			Fraction result = result.multiply2(f1, f2);//obtains result and prints in line below
			cout << "Product = ";
			result.print(result);
		}
		else if (oper == '/') {
			cout << "Fraction 1: ";
			f1.print(f1);
			cout << "Fraction 2: ";
			f2.print(f2);
			Fraction result = result.divide2(f1, f2);//obtains result and prints in line below
			cout << "Quotient = ";
			result.print(result);
		}
	}
	if (oper == 'q' || oper == 'Q') {//if the user presses q or Q, the loop interface will quit.
		cout << "REQUEST TO QUIT";
		exit(0);
	}
}
