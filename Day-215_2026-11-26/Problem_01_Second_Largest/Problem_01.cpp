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

    int largest = 0, second = 0;
    bool has_largest = false, has_second = false;
    for (int value : numbers) {
        if (!has_largest || value > largest) {
            if (has_largest) {
                second = largest;
                has_second = true;
            }
            largest = value;
            has_largest = true;
        } else if (value < largest && (!has_second || value > second)) {
            second = value;
            has_second = true;
        }
    }
    if (has_second) cout << "Second largest distinct: " << second << '\n';
    else cout << "Second largest distinct: Not found\n";
    return 0;
}
