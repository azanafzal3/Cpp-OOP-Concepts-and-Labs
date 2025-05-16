#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double r, double i);
    Complex(const Complex& copy);
    void setReal(double r);
    double getReal() const;
    void setImaginary(double i);
    double getImaginary() const;
    friend Complex addComplex(const Complex& c1, const Complex& c2);
    friend Complex subComplex(const Complex& c1, const Complex& c2);
    friend Complex mulComplex(const Complex& c1, const Complex& c2);
};

#endif // COMPLEX_H
