#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m) || n < 0 || m < 0) {
        cout << "Enter valid non-negative sizes.\n";
        return 1;
    }
    vector<int> first(n), second(m), merged;
    for (int &value : first) {
        if (!(cin >> value)) { cout << "Invalid first array.\n"; return 1; }
    }
    for (int &value : second) {
        if (!(cin >> value)) { cout << "Invalid second array.\n"; return 1; }
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (first[i] <= second[j]) merged.push_back(first[i++]);
        else merged.push_back(second[j++]);
    }
    while (i < n) merged.push_back(first[i++]);
    while (j < m) merged.push_back(second[j++]);

    cout << "Merged array: ";
    for (int value : merged) cout << value << ' ';
    cout << '\n';
    return 0;
}
