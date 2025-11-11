#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "Display function of Base class." << endl;
    }
};

// Derived class using public inheritance
class Derived : public Base {
public:
    void displayDerived() {
        cout << "Display function of Derived class." << endl;
    }
};

int main() {
    Derived d1;
    d1.displayBase();    // Accessible (public inheritance)
    d1.displayDerived(); // Own function
    return 0;
}
  