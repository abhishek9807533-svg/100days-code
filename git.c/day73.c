#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[1000];
    int minValue, maxDifference = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minValue = a[0];

    for (int i = 1; i < n; i++) {
        int difference = a[i] - minValue;

        if (difference > maxDifference)
            maxDifference = difference;

        if (a[i] < minValue)
            minValue = a[i];
    }

    printf("%d\n", maxDifference);

    return 0;
}