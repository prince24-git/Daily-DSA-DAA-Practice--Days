// Input: n, n sorted integers, target. Output: zero-based index or -1.
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& values, int target) {
    int left = 0;
    int right = static_cast<int>(values.size()) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (values[mid] == target) return mid;
        if (values[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    if (!(cin >> n) || n < 0) return 1;
    vector<int> values(n);
    for (int& value : values) cin >> value;
    int target;
    cin >> target;
    cout << binarySearch(values, target) << '\n';
}
