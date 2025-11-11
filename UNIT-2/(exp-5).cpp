#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called\n";
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor called\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    // Using Default Constructor
    Student s1;
    s1.display();

    // Using Parameterized Constructor
    Student s2(1, "Alice");
    s2.display();

    // Using Copy Constructor
    Student s3 = s2;
    s3.display();

    return 0;
}