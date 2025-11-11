#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    // Constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // Function to display student details
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating objects
    Student s1(1, "Alice", 89.5);
    Student s2(2, "Bob", 76.0);

    cout << "\nStudent 1 details:\n";
    s1.display();

    cout << "\nStudent 2 details:\n";
    s2.display();

    return 0;
}
