/* Input: n, n integers, target. Output: first matching zero-based index or -1. */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int values[n > 0 ? n : 1];
    for (int i = 0; i < n; ++i) scanf("%d", &values[i]);
    int target;
    scanf("%d", &target);
    int answer = -1;
    for (int i = 0; i < n; ++i) {
        if (values[i] == target) { answer = i; break; }
    }
    printf("%d\n", answer);
    return 0;
}
