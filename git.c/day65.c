#include <stdio.h>

int main() {
    int n, a[1000], target, found = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("%d %d\n", a[i], a[j]);
                found = 1;
                return 0;
            }
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}