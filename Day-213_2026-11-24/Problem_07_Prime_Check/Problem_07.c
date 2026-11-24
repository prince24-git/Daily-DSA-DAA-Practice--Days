#include <stdio.h>
int main(void) {
    int n, prime;
    scanf("%d", &n);
    prime = n >= 2;
    for (int d = 2; (long long)d * d <= n && prime; ++d)
        if (n % d == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
