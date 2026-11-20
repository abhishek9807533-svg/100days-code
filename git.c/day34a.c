#include <stdio.h>

int main() {
    int arr[100], n, i, pos, x;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}