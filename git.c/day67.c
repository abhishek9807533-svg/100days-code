#include <stdio.h>

int main() {
    int n, a[1000];
    int low = 0, mid = 0, high;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    high = n - 1;

    while (mid <= high) {
        if (a[mid] == 0) {
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;

            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else if (a[mid] == 2) {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;

            high--;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}