#include <iostream>
using namespace std;

struct Measurement {
    int type; // 1 = integer, 2 = decimal
    union {
        int whole;
        float decimal;
    } value;
};

int main() {
    Measurement m;
    cout << "1. Whole number  2. Decimal number\nChoose: ";
    cin >> m.type;

    if (m.type == 1) {
        cout << "Enter whole number: ";
        cin >> m.value.whole;
        cout << "Stored value: " << m.value.whole << '\n';
    } else if (m.type == 2) {
        cout << "Enter decimal number: ";
        cin >> m.value.decimal;
        cout << "Stored value: " << m.value.decimal << '\n';
    } else {
        cout << "Invalid choice\n";
    }
    return 0;
}
