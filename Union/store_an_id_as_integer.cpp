#include <iostream>
using namespace std;

union Identifier {
    int numericID;
    char letterID;
};

int main() {
    Identifier id;
    int choice;
    cout << "1.Numeric ID 2.Single-letter ID\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter numeric ID: ";
        cin >> id.numericID;
        cout << "Numeric ID: " << id.numericID << '\n';
    } else if (choice == 2) {
        cout << "Enter a letter: ";
        cin >> id.letterID;
        cout << "Letter ID: " << id.letterID << '\n';
    } else {
        cout << "Invalid choice\n";
    }
    return 0;
}
