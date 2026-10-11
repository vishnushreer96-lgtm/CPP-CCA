#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) return 0;

    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> *(a + i);

    int* left = a;
    int* right = a + n - 1;
    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) cout << *(a + i) << " ";
    cout << '\n';
    delete[] a;
    return 0;
}
