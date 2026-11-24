#include <stdio.h>
int main(void) {
    long long n, original, reversed = 0;
    scanf("%lld", &n);
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    puts(original == reversed ? "Yes" : "No");
    return 0;
}
