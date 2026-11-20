#include <stdio.h>
#include <limits.h>

int main() {
    int n, a[1000];
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }

        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2) {
            min2 = a[i];
        }
    }

    long long p1 = (long long)max1 * max2;
    long long p2 = (long long)min1 * min2;

    printf("%lld\n", p1 > p2 ? p1 : p2);

    return 0;
}