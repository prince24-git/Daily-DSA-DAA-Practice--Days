#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    if (!(cin >> n) || n < 1) {
        cout << "Enter n of at least 1.\n";
        return 1;
    }
    vector<int> values(n);
    for (int &value : values) {
        if (!(cin >> value)) { cout << "Invalid number input.\n"; return 1; }
    }
    if (!(cin >> k) || k < 1 || k > n) {
        cout << "k must be from 1 to n.\n";
        return 1;
    }
    for (int i = 1; i < n; i++) {
        int current = values[i], j = i - 1;
        while (j >= 0 && values[j] > current) {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = current;
    }
    cout << "Kth smallest: " << values[k - 1] << '\n';
    return 0;
}
