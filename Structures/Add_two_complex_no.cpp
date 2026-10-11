#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

int main() {
    Complex a, b, sum;
    cout << "Enter real and imaginary parts of first number:\n";
    cin >> a.real >> a.imag;
    cout << "Enter real and imaginary parts of second number:\n";
    cin >> b.real >> b.imag;

    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    cout << "Sum = " << sum.real;
    if (sum.imag >= 0) cout << " + " << sum.imag << "i\n";
    else cout << " - " << -sum.imag << "i\n";
    return 0;
}
