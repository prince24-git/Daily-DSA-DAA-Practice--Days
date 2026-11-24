#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long a, b, x, y;
    scanf("%lld%lld", &a, &b);
    x = a; y = b;
    while (y != 0) {
        long long r = x % y;
        x = y; y = r;
    }
    long long lcm = (a == 0 || b == 0) ? 0 : llabs((a / x) * b);
    printf("%lld\n", lcm);
    return 0;
}
