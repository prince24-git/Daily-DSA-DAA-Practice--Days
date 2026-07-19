/* Input: n and n integers. Output: the numbers sorted ascending. */
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int values[n > 0 ? n : 1];
    for (int i = 0; i < n; ++i) scanf("%d", &values[i]);
    for (int i = 0; i < n; ++i) {
        int smallest = i;
        for (int j = i + 1; j < n; ++j)
            if (values[j] < values[smallest]) smallest = j;
        int temp = values[i]; values[i] = values[smallest]; values[smallest] = temp;
    }
    for (int i = 0; i < n; ++i) printf("%s%d", i ? " " : "", values[i]);
    putchar('\n');
    return 0;
}
