// Input: n, n integers, target. Output: first matching pair of indices or -1 -1.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 0) return 1;
    vector<int> values(n);
    for (int& value : values) cin >> value;
    int target;
    cin >> target;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (values[i] + values[j] == target) {
                cout << i << ' ' << j << '\n';
                return 0;
            }
        }
    }
    cout << "-1 -1\n";
}
