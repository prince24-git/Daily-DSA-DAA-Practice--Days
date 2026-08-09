// Input: n, n integers, target. Output: first matching zero-based index or -1.
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
    int answer = -1;
    for (int i = 0; i < n; ++i) {
        if (values[i] == target) { answer = i; break; }
    }
    cout << answer << '\n';
}
