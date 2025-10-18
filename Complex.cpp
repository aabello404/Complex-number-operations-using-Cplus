#include "Complex.h"

Complexe::Complexe(float re, float im)
{
	this->re = re;
	this->ig = im;

}

void Complexe::aff() const
{
	if (this->ig >= 0) {
		cout << "Z: " << this->re << " + " << this->ig << "i" << endl;
	}
	else{
		cout  <<"Z: " << this->re << " - " << -(this->ig) << "i" << endl;

	}

}

Complexe Complexe::conjugate() const
{
	Complexe Z(0, 0);
	Z.re = this->re;
	Z.ig = -(this->ig);
	return Z;
}

Complexe Complexe::add(Complexe P)const
{
	Complexe Z(0,0);
	Z.re = this->re + P.re;
	Z.ig = this->ig + P.ig;

	return Z;
}

Complexe Complexe::operator+(const Complexe &P)
{
	Complexe Z(0, 0);
	Z.re = this->re + P.re;
	Z.ig = this->ig + P.ig;

	return Z;
}

Complexe Complexe::operator+(int I)
{
	Complexe Z(0, 0);
	Z.re = this->re + I ;
	Z.ig = this->ig + I;

	return Z;
}

Complexe Complexe::operator-(const Complexe& P)
{
	Complexe Z(0, 0);
	Z.re = this->re - P.re;
	Z.ig = this->ig - P.ig;

	return Z;
}

Complexe Complexe::operator*(const Complexe& P)
{
	Complexe Z(0, 0);
	Z.re = (this->re * P.re) - (this->ig * P.ig);
	Z.ig = (this->re * P.ig) + (this->ig * P.re);
	return Z;
}

bool Complexe::operator>(const Complexe& P)
{
	float Modthis = sqrt( pow(this->re,2) + pow(this->ig,2) );
	float ModP = sqrt( pow(P.re,2) +pow(P.ig,2) );
	if (Modthis > ModP) return true;
	else return false;
}

bool Complexe::operator<(const Complexe& P)
{
	float Modthis = sqrt(pow(this->re, 2) + pow(this->ig, 2));
	float ModP = sqrt(pow(P.re, 2) + pow(P.ig, 2));
	if (Modthis < ModP) return true;
	else return false;
}

bool Complexe::operator==(const Complexe& P)
{
	
	if ( this->re==P.re && this->ig==P.ig)  return true;
	else return false;
}

bool Complexe::operator!=(const Complexe& P)
{
	if (this->re == P.re && this->ig == P.ig)  return false;
	else return true;
}

Complexe Complexe::operator/(Complexe P)
{
	Complexe Z(0, 0), cj(0,0), numerator(0,0);
	cj = P.conjugate(); // To store conjugate of P
	numerator = this->operator*(cj);
	float denom = (P * cj).getrealpart(); // To get the real part of the denominator after we multiply P by it's conjugate
	if(denom==0){
		cout << "undefined: division by zero!" << endl;
		exit(-1);
	}
	Z.re = (numerator.re) / denom;
	Z.ig = (numerator.ig) / denom;
	
	return Z;
}



float Complexe::getrealpart() const
{
	return this->re;
}

float Complexe::getigpart() const
{
	return this->ig;
}






