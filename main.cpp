#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "The answer is: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "The answer is: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "The answer is: " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 != 0)
            cout << "The answer is: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
    } else {
        cout << "Wrong input!" << endl;
    }

    return 0;
}
