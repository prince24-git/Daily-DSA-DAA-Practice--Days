#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long total = 0;
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
        total += number;
    }
    cout << "Sum: " << total << '\n';
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Average: " << static_cast<double>(total) / n << '\n';
    return 0;
}
