#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

// Derived class Circle
class Circle : public Shape {
    int x, y, r;
public:
    Circle(int cx, int cy, int radius) : x(cx), y(cy), r(radius) {}
    void draw() {
        circle(x, y, r);
    }
};

// Derived class Rectangle
class RectangleShape : public Shape {
    int left, top, right, bottom;
public:
    RectangleShape(int l, int t, int r, int b) : left(l), top(t), right(r), bottom(b) {}
    void draw() {
        rectangle(left, top, right, bottom);
    }
};

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // initialize graphics mode

    // Create objects of shapes
    Circle c1(200, 200, 50);
    RectangleShape r1(100, 100, 300, 150);

    // Draw shapes
    c1.draw();
    r1.draw();

    getch(); // wait for key press
    closegraph(); // close graphics window
    return 0;
}
