#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Complex {
public:
	Complex(const double _real, const double _imaginary): real(_real), imaginary(_imaginary){};
	Complex (const double realPart): real(realPart), imaginary(0){};
	Complex(): real(0), imaginary(0){};
	
	double getReal() const {
		return real;
	}

	double getImaginary() const {
		return imaginary;
	}
private:
	double real, imaginary;
};

const Complex operator + (const Complex& left, const Complex& right) {
	return Complex(left.getReal() + right.getReal(), left.getImaginary()+right.getImaginary());
}

const Complex operator - (const Complex& left, const Complex& right) {
	return Complex(left.getReal() - right.getReal(), left.getImaginary() - right.getImaginary());
}

const bool operator == (const Complex& left, const Complex& right) {
	if (left.getReal() == right.getReal() && left.getImaginary() == right.getImaginary()) {
		return true;
	} else {
		return false;
	}
}

istream& operator >> (istream& ins, Complex& complex) {
	double real, imaginary;
	ins >> real >> imaginary;
	
	complex = Complex(real, imaginary);
	return ins;
}

ostream& operator << (ostream& outs, const Complex& complex) {
	outs << "(" << complex.getReal() << "," << complex.getImaginary() << ")";
	
	return outs;
}

const Complex i(0, 1);

int main () {
	cout << "Hello world. " << Complex(1, 5) << " " << i << endl;
	
	cout << (i == Complex (0, 1)) << endl;
	
	return 0;
}