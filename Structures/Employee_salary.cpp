#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basic;
    double hra;
    double da;
};

int main() {
    Employee e;
    cout << "Enter ID, name, basic salary, HRA, and DA:\n";
    cin >> e.id >> e.name >> e.basic >> e.hra >> e.da;

    double gross = e.basic + e.hra + e.da;
    cout << "Employee: " << e.name << '\n';
    cout << "Gross salary: " << gross << '\n';
    return 0;
}
