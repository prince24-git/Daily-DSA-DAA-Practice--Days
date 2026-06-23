/* Input: n, n integers, target. Output: first pair of distinct indices or -1 -1. */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    int values[n > 0 ? n : 1];
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &values[i]) != 1) return 1;
    }

    int target;
    if (scanf("%d", &target) != 1) return 1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (values[i] + values[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    puts("-1 -1");
    return 0;
}
