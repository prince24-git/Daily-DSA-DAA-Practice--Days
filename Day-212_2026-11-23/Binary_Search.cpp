#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> values(n);
    for (int& value : values) cin >> value;
    cin >> target;

    int low = 0, high = n - 1, answer = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (values[mid] == target) {
            answer = mid;
            break;
        } else if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << answer << '\n';
    return 0;
}
