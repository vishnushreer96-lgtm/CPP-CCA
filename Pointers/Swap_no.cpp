#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    swapNumbers(&x, &y);
    cout << "After swapping: " << x << " " << y << '\n';
    return 0;
}
