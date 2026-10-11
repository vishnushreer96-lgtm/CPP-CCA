#include <iostream>
using namespace std;

union Value {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    Value v;
    int choice;
    cout << "1.Integer 2.Float 3.Character\nChoose type: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter integer: ";
            cin >> v.integerValue;
            cout << "Value: " << v.integerValue << '\n';
            break;
        case 2:
            cout << "Enter float: ";
            cin >> v.floatValue;
            cout << "Value: " << v.floatValue << '\n';
            break;
        case 3:
            cout << "Enter character: ";
            cin >> v.characterValue;
            cout << "Value: " << v.characterValue << '\n';
            break;
        default:
            cout << "Invalid choice\n";
    }
    return 0;
}
