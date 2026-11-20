#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[1000];
    int minDiff = INT_MAX;
    int first, second;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int diff = a[i + 1] - a[i];

        if (diff < minDiff) {
            minDiff = diff;
            first = a[i];
            second = a[i + 1];
        }
    }

    printf("%d %d\n", first, second);

    return 0;
}