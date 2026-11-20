#include <stdio.h>

int main() {
    int n, a[1000];
    int total = 0, leftSum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - a[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        leftSum += a[i];
    }

    printf("-1\n");

    return 0;
}