#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Patient {
private:
    string patientName;
    int age;
    string disease;
    int roomNumber;

public:
    // Member function defined INSIDE the class
    void getDetails() {
        cout << "Enter Patient Name: ";
        getline(cin, patientName);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
        cout << "Enter Disease: ";
        getline(cin, disease);
        cout << "Enter Room Number: ";
        cin >> roomNumber;
    }

    // Declaration of member function (to be defined OUTSIDE the class)
    void displayDetails();
};

// Member function defined OUTSIDE the class
void Patient::displayDetails() {
    cout << "\n--- Patient Record ---" << endl;
    cout << "Patient Name : " << patientName << endl;
    cout << "Age          : " << age << endl;
    cout << "Disease      : " << disease << endl;
    cout << "Room Number  : " << roomNumber << endl;
}

int main() {
    Patient p;

    cout << "=== Hospital Patient Record System ===\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ensure clean input
    p.getDetails();
    p.displayDetails();

    return 0;
}
