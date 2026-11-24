#include <iostream>
using namespace std;
int main() {
    long long n, total = 0; cin >> n;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    cout << total << '\n';
}
