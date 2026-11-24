#include <stdio.h>
int main(void) {
    long long n, reversed = 0;
    scanf("%lld", &n);
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("%lld\n", reversed);
    return 0;
}
