#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target, found_index = -1;
    if (!(cin >> n) || n < 1) {
        cout << "Enter n of at least 1.\n";
        return 1;
    }
    vector<int> numbers(n);
    for (int &number : numbers) {
        if (!(cin >> number)) {
            cout << "Invalid number input.\n";
            return 1;
        }
    }
    if (!(cin >> target)) {
        cout << "Enter a target number.\n";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] == target) {
            found_index = i;
            break;
        }
    }
    cout << "Index: " << found_index << '\n';
    return 0;
}
