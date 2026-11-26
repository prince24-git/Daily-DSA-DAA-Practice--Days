#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, numbers[MAX_SIZE], is_sorted = 1;
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
    for (int i = 1; i < n; i++) {
        if (numbers[i] < numbers[i - 1]) {
            is_sorted = 0;
            break;
        }
    }
    printf("%s\n", is_sorted ? "Sorted" : "Not sorted");
    return 0;
}
