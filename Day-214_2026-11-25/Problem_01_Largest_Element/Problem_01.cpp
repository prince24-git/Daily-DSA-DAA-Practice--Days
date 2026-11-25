#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "How many numbers? ";
    if (!(cin >> n) || n < 1) {
        cout << "Enter a quantity of at least 1.\n";
        return 1;
    }

    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> numbers[i])) {
            cout << "Invalid number input.\n";
            return 1;
        }
    }

    int largest = numbers[0];
    int largest_index = 0;

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
            largest_index = i;
        }
    }

    cout << "Largest number: " << largest << '\n';
    cout << "Index: " << largest_index << '\n';
    return 0;
}
