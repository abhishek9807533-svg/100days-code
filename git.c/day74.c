#include <stdio.h>

int main() {
    int n, a[1000], leaders[1000];
    int maxRight, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxRight = a[n - 1];
    leaders[count++] = maxRight;

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= maxRight) {
            maxRight = a[i];
            leaders[count++] = a[i];
        }
    }

    for (int i = count - 1; i >= 0; i--)
        printf("%d ", leaders[i]);

    return 0;
}