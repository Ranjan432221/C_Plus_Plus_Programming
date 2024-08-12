#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0)  {
        real = r;
        imag = i;
    }

    // Declare the friend function for addition
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Function to display complex number
    void display() {
        std::cout << real << " + " << imag << "i";
    }
};

// Definition of the friend function for addition
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2.5, 3.0);  // First complex number
    Complex c2(1.5, 2.0);  // Second complex number

    Complex sum = c1 + c2;  // Add two complex numbers using operator overloading

    std::cout << "Sum of ";
    c1.display();
    std::cout << " and ";
    c2.display();
    std::cout << " is ";
    sum.display();
    std::cout << std::endl;

    return 0;
}
