#include <iostream>
using namespace std;

int main() {
    int n, number, even = 0, odd = 0;
    if (!(cin >> n) || n < 1) {
        cout << "Enter n of at least 1.\n";
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (!(cin >> number)) {
            cout << "Invalid number input.\n";
            return 1;
        }
        if (number % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << "\nOdd: " << odd << '\n';
    return 0;
}
