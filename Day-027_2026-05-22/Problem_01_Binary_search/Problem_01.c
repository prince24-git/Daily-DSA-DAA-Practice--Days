/* Input: n, n sorted integers, target. Output: zero-based index or -1. */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int values[n > 0 ? n : 1];
    for (int i = 0; i < n; ++i) scanf("%d", &values[i]);
    int target;
    scanf("%d", &target);
    int left = 0, right = n - 1, answer = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (values[mid] == target) { answer = mid; break; }
        if (values[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    printf("%d\n", answer);
    return 0;
}
