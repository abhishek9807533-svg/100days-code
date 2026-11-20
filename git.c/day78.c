#include <stdio.h>

int main() {
    int n, a[1000];
    int water = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int leftMax = a[i];
        int rightMax = a[i];

        for (int j = 0; j < i; j++) {
            if (a[j] > leftMax)
                leftMax = a[j];
        }

        for (int j = i + 1; j < n; j++) {
            if (a[j] > rightMax)
                rightMax = a[j];
        }

        int minHeight = leftMax < rightMax ?
                        leftMax : rightMax;

        water += minHeight - a[i];
    }

    printf("%d\n", water);

    return 0;
}