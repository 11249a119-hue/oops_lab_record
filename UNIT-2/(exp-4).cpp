#include <iostream>
using namespace std;

class Number {
    int num;

public:
    // Constructor
    Number(int n = 0) {
        num = n;
    }

    // Function to add two Number objects (passing object as argument)
    Number add(Number n) {
        Number temp;
        temp.num = num + n.num;
        return temp; // returning object
    }

    // Function to display value
    void display() {
        cout << "Value: " << num << endl;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    // Passing object as argument and returning object
    n3 = n1.add(n2);

    cout << "First Number: "; n1.display();
    cout << "Second Number: "; n2.display();
    cout << "Sum: "; n3.display();

    return 0;
}