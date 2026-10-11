#include <iostream>
using namespace std;

enum Grade { FAIL, PASS, GOOD, VERY_GOOD, EXCELLENT };

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks\n";
        return 0;
    }

    Grade g;
    if (marks < 35) g = FAIL;
    else if (marks < 50) g = PASS;
    else if (marks < 70) g = GOOD;
    else if (marks < 90) g = VERY_GOOD;
    else g = EXCELLENT;

    switch (g) {
        case FAIL: cout << "Grade: Fail\n"; break;
        case PASS: cout << "Grade: Pass\n"; break;
        case GOOD: cout << "Grade: Good\n"; break;
        case VERY_GOOD: cout << "Grade: Very Good\n"; break;
        case EXCELLENT: cout << "Grade: Excellent\n"; break;
    }
    return 0;
}
