#include <iostream>
#include <cstring> // for strcpy, strcmp
using namespace std;

class MyString {
private:
    char *str; // pointer to a char array

public:
    // Default constructor
    MyString() {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    MyString(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString &obj) {
        str = new char[strlen(obj.str) + 1];
        strcpy(str, obj.str);
    }

    // Overload assignment operator (=)
    MyString& operator=(const MyString &obj) {
        if (this != &obj) { // avoid self-assignment
            delete[] str; // free old memory
            str = new char[strlen(obj.str) + 1];
            strcpy(str, obj.str);
        }
        return *this;
    }

    // Overload comparison operator (==)
    bool operator==(const MyString &obj) const {
        return strcmp(str, obj.str) == 0;
    }

    // Display function
    void display() const {
        cout << str;
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");
    MyString s3;

    cout << "Before assignment: ";
    s3.display(); cout << endl;

    // Use overloaded assignment operator
    s3 = s1;
    cout << "After assignment: ";
    s3.display(); cout << endl;

    // Use overloaded comparison operator
    if (s1 == s3)
        cout << "s1 and s3 are equal." << endl;
    else
        cout << "s1 and s3 are not equal." << endl;

    if (s1 == s2)
        cout << "s1 and s2 are equal." << endl;
    else
        cout << "s1 and s2 are not equal." << endl;

    return 0;
}
