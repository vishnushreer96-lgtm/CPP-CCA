#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n == 0) {
        cout << "Unique count: 0\n";
        return 0;
    }

    int k = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[k - 1]) a[k++] = a[i];
    }

    cout << "Unique count: " << k << "\nUnique elements: ";
    for (int i = 0; i < k; i++) cout << a[i] << " ";
    cout << '\n';
    return 0;
}
