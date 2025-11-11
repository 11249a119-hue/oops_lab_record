#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);

    // Use overloaded + operator
    Complex c3 = c1 + c2;

    cout << "Result of addition: ";
    c3.display();

    return 0;
}
