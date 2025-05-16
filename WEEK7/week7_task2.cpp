#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex(Complex& copy) {
        real = copy.real;
        imaginary = copy.imaginary;
    }

    void setReal(double r) {
        real = r;
    }

    double getReal() {
        return real;
    }

    void setImaginary(double i) {
        imaginary = i;
    }

    double getImaginary() {
        return imaginary;
    }

    Complex addComplex(double r) {
        Complex result;
        result.real = real + r;
        result.imaginary = imaginary;
        return result;
    }

    Complex addComplex(Complex& c1) {
        Complex result;
        result.real = real + c1.real;
        result.imaginary = imaginary + c1.imaginary;
        return result;
    }

    Complex subComplex(double r) {
        Complex result;
        result.real = real - r;
        result.imaginary = imaginary;
        return result;
    }

    Complex subComplex(Complex& c1) {
        Complex result;
        result.real = real - c1.real;
        result.imaginary = imaginary - c1.imaginary;
        return result;
    }

    Complex mulComplex(double n) {
        Complex result;
        result.real = real * n;
        result.imaginary = imaginary * n;
        return result;
    }

    Complex mulComplex(Complex& c1) {
        Complex result;
        result.real = real * c1.real - imaginary * c1.imaginary;
        result.imaginary = real * c1.imaginary + imaginary * c1.real;
        return result;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, -1);
    Complex c3;

    c3 = c1.addComplex(c2);
    cout << "Sum of c1 and c2 is: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1.subComplex(c2);
    cout << "Difference of c1 and c2 is: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1.mulComplex(c2);
    cout << "Product of c1 and c2 is: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1.addComplex(5);
    cout << "Adding 5 to c1 results in: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1.subComplex(2);
    cout << "Subtracting 2 from c1 results in: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    c3 = c1.mulComplex(2);
    cout << "Multiplying c1 by 2 results in: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    return 0;
}


