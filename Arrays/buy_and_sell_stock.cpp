#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++) cin >> price[i];

    int minimum = price[0], bestProfit = 0;
    for (int i = 1; i < n; i++) {
        bestProfit = max(bestProfit, price[i] - minimum);
        minimum = min(minimum, price[i]);
    }
    cout << "Maximum profit: " << bestProfit << '\n';
    return 0;
}
