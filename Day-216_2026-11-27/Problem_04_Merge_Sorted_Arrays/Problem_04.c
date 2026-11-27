#include <stdio.h>

#define MAX_SIZE 10000

int main(void) {
    int n, m, first[MAX_SIZE], second[MAX_SIZE], merged[2 * MAX_SIZE];
    if (scanf("%d %d", &n, &m) != 2 || n < 0 || m < 0 || n > MAX_SIZE || m > MAX_SIZE) {
        printf("Enter valid sizes from 0 to %d.\n", MAX_SIZE);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &first[i]) != 1) { printf("Invalid first array.\n"); return 1; }
    }
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &second[i]) != 1) { printf("Invalid second array.\n"); return 1; }
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (first[i] <= second[j]) merged[k++] = first[i++];
        else merged[k++] = second[j++];
    }
    while (i < n) merged[k++] = first[i++];
    while (j < m) merged[k++] = second[j++];

    printf("Merged array: ");
    for (int x = 0; x < k; x++) printf("%d ", merged[x]);
    printf("\n");
    return 0;
}
