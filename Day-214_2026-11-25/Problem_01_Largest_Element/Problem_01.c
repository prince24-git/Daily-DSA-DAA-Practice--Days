#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n;
    int numbers[MAX_SIZE];

    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Enter a quantity from 1 to %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid number input.\n");
            return 1;
        }
    }

    int largest = numbers[0];
    int largest_index = 0;

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
            largest_index = i;
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Index: %d\n", largest_index);
    return 0;
}
