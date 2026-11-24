#include <iostream>
using namespace std;
int main() {
    long long n; int count = 0; cin >> n;
    do {
        count++;
        n /= 10;
    } while (n > 0);
    cout << count << '\n';
}
