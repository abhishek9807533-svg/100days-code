#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("-1");
    else
        printf("%d", second);

    return 0;
}