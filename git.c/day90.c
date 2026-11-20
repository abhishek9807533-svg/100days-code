#include <stdio.h>

int main() {
    int n, a[1000];
    int inc[1000], dec[1000];
    int maxLength = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        inc[i] = 1;
        dec[i] = 1;
    }

    // Longest increasing subsequence ending at i
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && inc[j] + 1 > inc[i])
                inc[i] = inc[j] + 1;
        }
    }

    // Longest decreasing subsequence starting at i
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i] && dec[j] + 1 > dec[i])
                dec[i] = dec[j] + 1;
        }
    }

    // Combine both sequences
    for (int i = 0; i < n; i++) {
        int length = inc[i] + dec[i] - 1;

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d\n", maxLength);

    return 0;
}