#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    long long a, b, x, y; cin >> a >> b;
    x = a; y = b;
    while (y != 0) {
        long long r = x % y;
        x = y; y = r;
    }
    long long lcm = (a == 0 || b == 0) ? 0 : llabs((a / x) * b);
    cout << lcm << '\n';
}
