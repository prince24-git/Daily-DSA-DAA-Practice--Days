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
    int write = 1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] != numbers[write - 1]) {
            numbers[write] = numbers[i];
            write++;
        }
    }
    cout << "Unique values: ";
    for (int i = 0; i < write; i++) cout << numbers[i] << ' ';
    cout << "\nCount: " << write << '\n';
    return 0;
}
