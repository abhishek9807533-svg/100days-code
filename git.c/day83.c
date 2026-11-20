#include <stdio.h>

int main() {
    int n, a[1000];
    int min, max;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}