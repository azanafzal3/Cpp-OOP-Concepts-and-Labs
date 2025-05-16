#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    // create two Complex numbers
    Complex c1(2, 3);
    Complex c2(4, 5);

    // add the Complex numbers
    Complex c3 = addComplex(c1, c2);

    // display the result
    cout << "Addition: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;

    // subtract the Complex numbers
    Complex c4 = subComplex(c1, c2);

    // display the result
    cout << "Subtraction: " << c4.getReal() << " + " << c4.getImaginary() << "i" << endl;

    // multiply the Complex numbers
    Complex c5 = mulComplex(c1, c2);

    // display the result
    cout << "Multiplication: " << c5.getReal() << " + " << c5.getImaginary() << "i" << endl;

    return 0;
}
