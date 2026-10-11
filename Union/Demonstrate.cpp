#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 25;
    cout << "Integer: " << d.i << '\n';

    d.f = 7.5f;
    cout << "Float: " << d.f << '\n';

    d.c = 'A';
    cout << "Character: " << d.c << '\n';

    cout << "All members share the same memory location.\n";
    return 0;
}
