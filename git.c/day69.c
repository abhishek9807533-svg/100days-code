#include <stdio.h>

int main() {
    int n, a[1000];
    int longest = 0, current = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

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

    for (int i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1])
            continue;

        if (i > 0 && a[i] == a[i - 1] + 1)
            current++;
        else
            current = 1;

        if (current > longest)
            longest = current;
    }

    printf("%d\n", longest);

    return 0;
}