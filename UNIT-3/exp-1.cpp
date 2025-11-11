#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Friend function declaration
    friend int area(Rectangle r);
};

// Friend function definition
int area(Rectangle r) {
    return r.length * r.width; // Accessing private members
}

int main() {
    Rectangle rect(10, 5);

    cout << "Area of Rectangle: " << area(rect) << endl;

    return 0;
}