#include <stdio.h>

int main() {
    int n, a[1000], target;
    int start = 0, sum = 0, found = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for (int end = 0; end < n; end++) {
        sum += a[end];

        while (sum > target && start <= end) {
            sum -= a[start];
            start++;
        }

        if (sum == target) {
            printf("%d %d\n", start, end);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}