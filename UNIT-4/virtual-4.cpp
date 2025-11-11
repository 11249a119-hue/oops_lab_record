#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class 1
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    void area() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    Shape *shape;  // Base class pointer

    Circle c(5);
    Rectangle r(4, 6);

    shape = &c;
    shape->area();  // Calls Circle's area()

    shape = &r;
    shape->area();  // Calls Rectangle's area()

    return 0;
}
