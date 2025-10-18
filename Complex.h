#pragma once
#include <iostream>
using namespace std;
#include <math.h>

class Complexe {
private:
	float re;
	float ig;
public:
	Complexe(float, float);
	void aff() const;
	Complexe conjugate() const;
	Complexe add(Complexe P)const;
	Complexe operator+(const Complexe& P);
	Complexe operator+(int);
	Complexe operator-(const Complexe& P);
	Complexe operator*(const Complexe& P);
	bool operator>(const Complexe& P);//N.B: As we can't compare two complex numbers in terms of which is bigger we can still compare their modulus(magnitude), so that is what we usnng this functions for.
	bool operator<(const Complexe& P);
	bool operator==(const Complexe& P);
	bool operator!=(const Complexe& P);
	Complexe operator/(Complexe P);
	float getrealpart()const;// To get real part of a complex number it will be useful later
	float getigpart()const;// Same for imaginary part

};