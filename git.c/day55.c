#include <stdio.h>

int main() {
    int n, a[1000];
    int candidate, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = a[i];

        if (a[i] == candidate)
            count++;
        else
            count--;
    }

    // Verify candidate
    count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}