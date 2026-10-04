// Input: n and n integers. Output: the numbers sorted ascending.
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 0) return 1;
    vector<int> values(n);
    for (int& value : values) cin >> value;
    for (int i = 0; i < n; ++i) {
        int smallest = i;
        for (int j = i + 1; j < n; ++j)
            if (values[j] < values[smallest]) smallest = j;
        swap(values[i], values[smallest]);
    }
    for (int i = 0; i < n; ++i) cout << (i ? " " : "") << values[i];
    cout << '\n';
}
