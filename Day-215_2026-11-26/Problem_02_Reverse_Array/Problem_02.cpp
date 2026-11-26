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

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }
    cout << "Reversed array: ";
    for (int value : numbers) cout << value << ' ';
    cout << '\n';
    return 0;
}
