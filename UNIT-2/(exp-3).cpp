#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two double values
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition of 2 integers: " << calc.add(5, 10) << endl;
    cout << "Addition of 3 integers: " << calc.add(5, 10, 15) << endl;
    cout << "Addition of 2 doubles: " << calc.add(5.5, 10.5) << endl;

    return 0;
}
