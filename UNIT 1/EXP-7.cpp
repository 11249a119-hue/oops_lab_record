#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string bookName;
    string author;
    float price;

public:
    // Member function defined INSIDE the class
    void getDetails() {
        cout << "Enter Book Name: ";
        getline(cin, bookName);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    // Declaration of member function (to be defined OUTSIDE)
    void displayDetails();
};

// Member function defined OUTSIDE the class
void Library::displayDetails() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Book Name : " << bookName << endl;
    cout << "Author    : " << author << endl;
    cout << "Price     : $" << price << endl;
}

int main() {
    Library book;

    cout << "=== Library Management System ===" << endl;

    // Clear input buffer (important when using getline after cin)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    book.getDetails();
    book.displayDetails();

    return 0;
}
