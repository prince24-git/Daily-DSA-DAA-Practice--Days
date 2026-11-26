#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 1) {
        cout << "Enter n of at least 1.\n";
        return 1;
    }
    vector<int> numbers(n);
    for (int &value : numbers) {
        if (!(cin >> value)) {
            cout << "Invalid number input.\n";
            return 1;
        }
    }
    bool is_sorted = true;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < numbers[i - 1]) {
            is_sorted = false;
            break;
        }
    }
    cout << (is_sorted ? "Sorted" : "Not sorted") << '\n';
    return 0;
}
