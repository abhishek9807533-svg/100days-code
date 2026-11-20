#include <stdio.h>

int main() {
    int n, a[1000], count[1001] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 0 && a[i] <= 1000)
            count[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] <= 1000 &&
            count[a[i]] > 1) {
            printf("%d ", a[i]);
            count[a[i]] = 0;
        }
    }

    return 0;
}