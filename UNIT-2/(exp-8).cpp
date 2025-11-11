#include <iostream>
using namespace std;

class Math {
public:
    // Inline function to add two numbers
    inline int add(int a, int b) {
        return a + b;
    }

    // Inline function to multiply two numbers
    inline int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Math m;
    int x = 5, y = 10;

    cout << "Sum: " << m.add(x, y) << endl;
    cout << "Product: " << m.multiply(x, y) << endl;

    return 0;
}