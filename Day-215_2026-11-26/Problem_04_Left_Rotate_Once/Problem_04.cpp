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
    int first = numbers[0];
    for (int i = 0; i < n - 1; i++) numbers[i] = numbers[i + 1];
    numbers[n - 1] = first;

    cout << "Rotated array: ";
    for (int value : numbers) cout << value << ' ';
    cout << '\n';
    return 0;
}
