#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 1) {
        cout << "Enter n of at least 1.\n";
        return 1;
    }
    vector<int> values(n);
    for (int &value : values) {
        if (!(cin >> value)) {
            cout << "Invalid number input.\n";
            return 1;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        int minimum_index = i;
        for (int j = i + 1; j < n; j++) {
            if (values[j] < values[minimum_index]) minimum_index = j;
        }
        swap(values[i], values[minimum_index]);
    }
    cout << "Sorted array: ";
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
