//============================================================================
// Name        : hw.cpp
// Author      : tony
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	double number1;
	double number2;

	double sum;
	cout << "Enter the first number" << endl; // endl makes a new line
	cin >> number1;
	cout << "Enter the second number" << endl; // endl makes a new line
	cin >> number2;
	// added together
	sum = number1 + number2;
	cout << "loading..." << endl;
	cout << sum << endl;

	cout << "bye!" << endl;
	return 0;
}
