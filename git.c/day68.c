#include <stdio.h>

int main() {
    int n, a[1000];
    int currentSum, maxSum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    currentSum = maxSum = a[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + a[i] > a[i])
            currentSum += a[i];
        else
            currentSum = a[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}