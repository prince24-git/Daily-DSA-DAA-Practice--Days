#include <iostream>
using namespace std;
int main() {
    int n; long long result = 1; cin >> n;
    for (int value = 2; value <= n; ++value)
        result *= value;
    cout << result << '\n';
}
