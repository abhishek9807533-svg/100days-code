#include <stdio.h>

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, arrival[1000], departure[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arrival[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &departure[i]);

    sort(arrival, n);
    sort(departure, n);

    int platforms = 0;
    int maxPlatforms = 0;
    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arrival[i] <= departure[j]) {
            platforms++;
            i++;

            if (platforms > maxPlatforms)
                maxPlatforms = platforms;
        } else {
            platforms--;
            j++;
        }
    }

    printf("%d\n", maxPlatforms);

    return 0;
}