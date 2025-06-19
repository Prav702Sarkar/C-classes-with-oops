#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
        cout << "Constructor called for: " << real << " + " << imag << "i" << endl;
    }

    // Copy constructor (optional)
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
        cout << "Copy Constructor called.\n";
    }

    // Destructor
    ~Complex() {
        cout << "Destructor called for: " << real << " + " << imag << "i" << endl;
    }

    // Function to add complex numbers
    Complex add(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to subtract complex numbers
    Complex subtract(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Function to multiply complex numbers
    Complex multiply(const Complex &c) {
        float r = real * c.real - imag * c.imag;
        float i = real * c.imag + imag * c.real;
        return Complex(r, i);
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Main function
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "\nFirst number: ";
    c1.display();

    cout << "Second number: ";
    c2.display();

    Complex sum = c1.add(c2);
    cout << "\nSum: ";
    sum.display();

    Complex diff = c1.subtract(c2);
    cout << "Difference: ";
    diff.display();

    Complex prod = c1.multiply(c2);
    cout << "Product: ";
    prod.display();

    return 0;
}
