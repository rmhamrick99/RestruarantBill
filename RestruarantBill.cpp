#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);

int main() {
	// Make sure you comment your programs.
	// Variable Declaration Section
	// Flogorithm will require you to declare all variables. You then might want to initialize their start value. Zero (0) is a good place to begin. Some variables need to be initialized to a start value other than zero.
	// Raptor may not require you to declare variables.
	// Java & C++ will require you to declare variables.
	// It is always a good idea.
	double rAmountPurch;
	double rAmountTip;
	double rAmountTax;
	double rAmountTotal;
	double rTotal;

	// Input Section
	// Notice: Flowgorithm will need an output and an input to bring in data from the keyboard.
	// One for the prompt.
	// One for the actual input to go into a variable.
	cout << "Tip Tax and Total" << endl;
	cout << "Enter the amount of the food purchase." << endl;
	cin >> rAmountPurch;

	// Process Section
	rAmountTax = rAmountPurch * 0.0675;
	rAmountTotal = rAmountPurch + rAmountTax;
	rAmountTip = rAmountTotal * 0.2;
	rTotal = rAmountTotal + rAmountTip;

	// Output Section
	cout << "The amount of food purchased: " << rAmountPurch << endl;
	cout << "The amount of tax: " << rAmountTax << endl;
	cout << "The amount of tip: " << rAmountTip << endl;
	cout << "The total: " << rTotal << endl;
	
	system("pause");
	

	// End of Program

	return 0;
}

// The following implements type conversion functions.
string toString(double value) { //int also
	stringstream temp;
	temp << value;
	return temp.str();
}

int toInt(string text) {
	return atoi(text.c_str());
}

double toDouble(string text) {
	return atof(text.c_str());
}
