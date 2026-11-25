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
    for (int &number : numbers) {
        if (!(cin >> number)) {
            cout << "Invalid number input.\n";
            return 1;
        }
    }

    int smallest = numbers[0], smallest_index = 0;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallest_index = i;
        }
    }
    cout << "Smallest number: " << smallest << "\nIndex: " << smallest_index << '\n';
    return 0;
}
