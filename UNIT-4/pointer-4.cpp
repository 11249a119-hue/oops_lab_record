#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    // Using 'this' pointer
    void setData(string name, int marks) {
        this->name = name;      // 'this' pointer differentiates between data member and parameter
        this->marks = marks;
    }

    // InliStudent Name: John
Marks: 85ne function to display data
    inline void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData("John", 85);
    s1.display();

    return 0;
}
