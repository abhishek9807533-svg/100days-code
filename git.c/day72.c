#include <stdio.h>

int main() {
    int n, a[1000];
    long long result[1000];
    long long left = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Store products of elements to the left
    for (int i = 0; i < n; i++) {
        result[i] = left;
        left *= a[i];
    }

    // Multiply by products of elements to the right
    long long right = 1;

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= right;
        right *= a[i];
    }

    for (int i = 0; i < n; i++)
        printf("%lld ", result[i]);

    return 0;
}