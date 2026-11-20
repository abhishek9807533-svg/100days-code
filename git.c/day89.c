#include <stdio.h>

int main() {
    int n, a[1000], dp[1000];
    int maxLength = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        dp[i] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        }

        if (dp[i] > maxLength)
            maxLength = dp[i];
    }

    printf("%d\n", maxLength);

    return 0;
}