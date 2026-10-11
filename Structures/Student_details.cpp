#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s;
    cout << "Enter roll number, name, and marks:\n";
    cin >> s.rollNo >> s.name >> s.marks;

    cout << "Roll number: " << s.rollNo << '\n';
    cout << "Name: " << s.name << '\n';
    cout << "Marks: " << s.marks << '\n';
    return 0;
}
