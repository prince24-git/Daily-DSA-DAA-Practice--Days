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
    int write = 1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] != numbers[write - 1]) {
            numbers[write] = numbers[i];
            write++;
        }
    }
    printf("Unique values: ");
    for (int i = 0; i < write; i++) printf("%d ", numbers[i]);
    printf("\nCount: %d\n", write);
    return 0;
}
