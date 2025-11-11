#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    static int count; // static data member

    // Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        count++; // increment count whenever object is created
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Initialize static data member outside the class
int Student::count = 0;

int main() {
    Student s1(1, "Alice");
    Student s2(2, "Bob");

    s1.display();
    s2.display();

    // Call static function using class name
    Student::showCount();

    return 0;
}