#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore(); // to ignore newline
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n]; // array of objects

    // Input data for each student
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        students[i].input();
    }

    // Display data for each student
    cout << "\nStudent Details:\n";
    for(int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}