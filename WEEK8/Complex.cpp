#include "Complex.h"

Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex::Complex(const Complex& copy) : real(copy.real), imaginary(copy.imaginary) {}

void Complex::setReal(double r) {
    real = r;
}

double Complex::getReal() const {
    return real;
}

void Complex::setImaginary(double i) {
    imaginary = i;
}

double Complex::getImaginary() const {
    return imaginary;
}

Complex addComplex(const Complex& c1, const Complex& c2) {
    double r = c1.real + c2.real;
    double i = c1.imaginary + c2.imaginary;
    return Complex(r, i);
}

Complex subComplex(const Complex& c1, const Complex& c2) {
    double r = c1.real - c2.real;
    double i = c1.imaginary - c2.imaginary;
    return Complex(r, i);
}

Complex mulComplex(const Complex& c1, const Complex& c2) {
    double r = c1.real * c2.real - c1.imaginary * c2.imaginary;
    double i = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return Complex(r, i);
}
