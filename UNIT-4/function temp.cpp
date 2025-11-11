#include <iostream>
using namespace std;

// Function Template Definition
template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of 10 and 20 (int): " << findMax(10, 20) << endl;
    cout << "Maximum of 5.5 and 2.3 (float): " << findMax(5.5, 2.3) << endl;
    cout << "Maximum of 'A' and 'Z' (char): " << findMax('A', 'Z') << endl;

    return 0;
}