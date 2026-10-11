#include <iostream>
using namespace std;

enum Signal { RED = 1, YELLOW, GREEN };

int main() {
    int choice;
    cout << "1.Red  2.Yellow  3.Green\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case RED: cout << "STOP\n"; break;
        case YELLOW: cout << "WAIT\n"; break;
        case GREEN: cout << "GO\n"; break;
        default: cout << "Invalid signal\n";
    }
    return 0;
}
