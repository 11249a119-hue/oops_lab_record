#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    // User-defined function to get input
    void getData() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    // User-defined function to display details
    void displayData() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // User-defined function to calculate grade
    void grade() {
        if (marks >= 90)
            cout << "Grade: A+" << endl;
        else if (marks >= 75)
            cout << "Grade: A" << endl;
        else if (marks >= 60)
            cout << "Grade: B" << endl;
        else if (marks >= 40)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;
    }
};

int main() {
    Student s; // Create object

    s.getData();      // Call user-defined function
    s.displayData();  // Call user-defined function
    s.grade();        // Call user-defined function

    return 0;
}
