#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> *(a + i);

    int* write = a;
    for (int* read = a; read < a + n; read++) {
        if (*read != 0) {
            int temp = *write;
            *write = *read;
            *read = temp;
            write++;
        }
    }

    for (int i = 0; i < n; i++) cout << *(a + i) << " ";
    cout << '\n';
    delete[] a;
    return 0;
}
