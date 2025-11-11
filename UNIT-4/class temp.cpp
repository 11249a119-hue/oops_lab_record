#include <iostream>
using namespace std;

// Class Template Definition
template <class T>
class Calculator {
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers are: " << num1 << " and " << num2 << endl;
        cout << "Addition = " << add() << endl;
        cout << "Subtraction = " << subtract() << endl;
        cout << "Multiplication = " << multiply() << endl;
        cout << "Division = " << divide() << endl;
    }

    T add()        { return num1 + num2; }
    T subtract()   { return num1 - num2; }
    T multiply()   { return num1 * num2; }
    T divide()     { return num1 / num2; }
};

int main() {
    cout << "--- Integer Calculator ---" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.displayResult();

    cout << "\n--- Float Calculator ---" << endl;
    Calculator<float> floatCalc(7.5, 2.5);
    floatCalc.displayResult();

    return 0;
}
