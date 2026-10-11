#include <iostream>
using namespace std;

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    double a, b;
    int choice;
    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice >> a >> b;

    switch (choice) {
        case ADD: cout << a + b << '\n'; break;
        case SUBTRACT: cout << a - b << '\n'; break;
        case MULTIPLY: cout << a * b << '\n'; break;
        case DIVIDE:
            if (b == 0) cout << "Division by zero is not allowed\n";
            else cout << a / b << '\n';
            break;
        default: cout << "Invalid operation\n";
    }
    return 0;
}
