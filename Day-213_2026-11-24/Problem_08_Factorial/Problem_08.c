#include <stdio.h>
int main(void) {
    int n;
    long long result = 1;
    scanf("%d", &n);
    for (int value = 2; value <= n; ++value)
        result *= value;
    printf("%lld\n", result);
    return 0;
}
