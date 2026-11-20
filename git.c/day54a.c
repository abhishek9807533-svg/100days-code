#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;
    long long low = 1, high = n;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == total) {
            printf("%lld\n", mid);
            return 0;
        } else if (square < total) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("-1\n");

    return 0;
}