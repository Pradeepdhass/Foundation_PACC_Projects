#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    void addition() {
        cout << "Addition = " << a + b << endl;
    }

    void multiplication() {
        cout << "Multiplication = " << a * b << endl;
    }

    void division() {
        if (b != 0)
            cout << "Division = " << (float)a / b << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }
};

int main() {
    Calculator c1;

    cout << "Enter two numbers: ";
    cin >> c1.a >> c1.b;

    c1.addition();
    c1.multiplication();
    c1.division();

    return 0;
}