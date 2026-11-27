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
    for (int end = n - 1; end > 0; end--) {
        bool swapped = false;
        for (int i = 0; i < end; i++) {
            if (values[i] > values[i + 1]) {
                swap(values[i], values[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    cout << "Sorted array: ";
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
