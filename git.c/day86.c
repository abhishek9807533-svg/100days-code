#include <stdio.h>

int main() {
    int n, k, a[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("-1\n");
        return 0;
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("%d\n", a[k - 1]);

    return 0;
}