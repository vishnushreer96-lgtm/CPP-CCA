#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    float marks;
};

int main() {
    int n;
    cin >> n;
    vector<Student> s(n);

    for (int i = 0; i < n; i++) cin >> s[i].name >> s[i].marks;

    sort(s.begin(), s.end(), [](const Student& a, const Student& b) {
        return a.marks > b.marks;
    });

    cout << "Students in descending order of marks:\n";
    for (const Student& x : s)
        cout << x.name << " " << x.marks << '\n';
    return 0;
}
