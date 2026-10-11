#include <iostream>
using namespace std;

enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
           FRIDAY, SATURDAY, SUNDAY };

int main() {
    int n;
    cout << "Enter day number (1-7): ";
    cin >> n;

    if (n < 1 || n > 7) {
        cout << "Invalid day number\n";
        return 0;
    }

    Day d = static_cast<Day>(n);
    switch (d) {
        case MONDAY: cout << "Monday\n"; break;
        case TUESDAY: cout << "Tuesday\n"; break;
        case WEDNESDAY: cout << "Wednesday\n"; break;
        case THURSDAY: cout << "Thursday\n"; break;
        case FRIDAY: cout << "Friday\n"; break;
        case SATURDAY: cout << "Saturday\n"; break;
        case SUNDAY: cout << "Sunday\n"; break;
    }
    return 0;
}
