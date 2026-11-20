#include <stdio.h>

int main() {
    int n, a[1000];
    int sorted = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}