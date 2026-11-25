#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, numbers[MAX_SIZE], target, found_index = -1;
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
    if (scanf("%d", &target) != 1) {
        printf("Enter a target number.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] == target) {
            found_index = i;
            break;
        }
    }
    printf("Index: %d\n", found_index);
    return 0;
}
