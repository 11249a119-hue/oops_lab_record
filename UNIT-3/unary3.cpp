#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Overloading unary ++ operator
    void operator++() {
        ++value; // increment the value
    }

    // Overloading unary -- operator (optional)
    void operator--() {
        --value; // decrement the value
    }

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(5);       // Object with initial value
    cout << "Before increment: ";
    num.display();

    ++num;               // Using overloaded ++ operator
    cout << "After increment: ";
    num.display();

    --num;               // Using overloaded -- operator
    cout << "After decrement: ";
    num.display();

    return 0;
}