#include <stdio.h>

int main() {
    int n, a[1000];
    int total = 0;

    int maxEnding, maxSum;
    int minEnding, minSum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxEnding = maxSum = a[0];
    minEnding = minSum = a[0];
    total = a[0];

    for (int i = 1; i < n; i++) {
        total += a[i];

        if (maxEnding + a[i] > a[i])
            maxEnding += a[i];
        else
            maxEnding = a[i];

        if (maxEnding > maxSum)
            maxSum = maxEnding;

        if (minEnding + a[i] < a[i])
            minEnding += a[i];
        else
            minEnding = a[i];

        if (minEnding < minSum)
            minSum = minEnding;
    }

    if (maxSum < 0)
        printf("%d\n", maxSum);
    else {
        int circularSum = total - minSum;

        if (circularSum > maxSum)
            printf("%d\n", circularSum);
        else
            printf("%d\n", maxSum);
    }

    return 0;
}