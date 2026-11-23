#include <stdio.h>

int main(void) {
    int n, target;
    int values[100000];
    if (scanf("%d", &n) != 1 || n < 0 || n > 100000) return 1;
    for (int i = 0; i < n; ++i) scanf("%d", &values[i]);
    scanf("%d", &target);

    int low = 0, high = n - 1, answer = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (values[mid] == target) {
            answer = mid;
            break;
        } else if (values[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%d\n", answer);
    return 0;
}
