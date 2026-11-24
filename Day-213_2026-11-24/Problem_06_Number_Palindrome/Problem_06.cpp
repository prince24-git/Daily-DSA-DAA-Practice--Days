#include <iostream>
using namespace std;
int main() {
    long long n, original, reversed = 0; cin >> n;
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << (original == reversed ? "Yes" : "No") << '\n';
}
