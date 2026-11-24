#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    bool prime = n >= 2;
    for (int d = 2; 1LL * d * d <= n && prime; ++d)
        if (n % d == 0) prime = false;
    cout << (prime ? "Prime" : "Not prime") << '\n';
}
