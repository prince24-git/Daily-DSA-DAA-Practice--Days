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
    for (int i = 1; i < n; i++) {
        int current = values[i];
        int j = i - 1;
        while (j >= 0 && values[j] > current) {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = current;
    }
    cout << "Sorted array: ";
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
