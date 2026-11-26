#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, value, largest = 0, second = 0;
    int has_largest = 0, has_second = 0;

    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Enter n from 1 to %d.\n", MAX_SIZE);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1) {
            printf("Invalid number input.\n");
            return 1;
        }
        if (!has_largest || value > largest) {
            if (has_largest) {
                second = largest;
                has_second = 1;
            }
            largest = value;
            has_largest = 1;
        } else if (value < largest && (!has_second || value > second)) {
            second = value;
            has_second = 1;
        }
    }
    if (has_second) printf("Second largest distinct: %d\n", second);
    else printf("Second largest distinct: Not found\n");
    return 0;
}
