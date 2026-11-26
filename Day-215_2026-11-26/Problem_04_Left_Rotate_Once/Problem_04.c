#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, numbers[MAX_SIZE];
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Enter n from 1 to %d.\n", MAX_SIZE);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid number input.\n");
            return 1;
        }
    }
    int first = numbers[0];
    for (int i = 0; i < n - 1; i++) numbers[i] = numbers[i + 1];
    numbers[n - 1] = first;

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
