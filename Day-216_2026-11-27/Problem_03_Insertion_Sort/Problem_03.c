#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, values[MAX_SIZE];
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Enter n from 1 to %d.\n", MAX_SIZE);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid number input.\n");
            return 1;
        }
    }
    for (int i = 1; i < n; i++) {
        int current = values[i];
        int j = i - 1;
        while (j >= 0 && values[j] > current) {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = current;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", values[i]);
    printf("\n");
    return 0;
}
