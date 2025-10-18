#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
	
	Complexe Z1(2, -5); //creation statitque of a complex number
	Complexe Z2(4, 7);
	Complexe Z3(0, 0);

	//affichage
	Z1.aff();
	Z2.aff();
	Z3.aff();
	 
	// surchage(overloading) d'une operateur

	// "+" Addition
	Z3 = Z1 + Z2;
	Z3.aff();

	// "-" Substraction
	Z3 = Z1 - Z2;
	Z3.aff();

	// "*" Multiplication
	Z3 = Z1 * Z2;
	Z3.aff();
	
	// "/" Division
	Z3 = Z1 / Z2;
	Z3.aff();


	// ">" greater sign
	if (Z1> Z2) {
		cout << "Z1 is greater than Z2" << endl;
	}
	else {
		cout << "Z1 is not greater than Z2!" << endl;
	}


	// "<" less than sign
	if (Z3 < Z2) {
		cout << "Z3 is less than Z2" << endl;
	}
	else {
		cout << "Z3 is not less than Z2!" << endl;
	}

	//"==" equal
	if (Z1 == Z2) {
		cout << "Z1 is equal to Z2" << endl;
	}
	else {
		cout << "Z1 is not equal to Z2" << endl;
	}

	// "!=" not equal
	if (Z1 != Z2) cout << "Z1 et Z2 n'est sont pas egaux" << endl;

	return 0;
}

//bool istall = false;
//istall = 1;
//if (istall) {
//	cout << "hello" << endl;
//}

