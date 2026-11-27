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
    for (int end = n - 1; end > 0; end--) {
        int swapped = 0;
        for (int i = 0; i < end; i++) {
            if (values[i] > values[i + 1]) {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", values[i]);
    printf("\n");
    return 0;
}
