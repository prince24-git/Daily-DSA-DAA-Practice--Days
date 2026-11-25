#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, number;
    long long total = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Enter n from 1 to %d.\n", MAX_SIZE);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &number) != 1) {
            printf("Invalid number input.\n");
            return 1;
        }
        total += number;
    }
    printf("Sum: %lld\nAverage: %.2f\n", total, (double)total / n);
    return 0;
}
