#include <stdio.h>

int main() {
    int n, a[1000], count;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count == 1) {
            printf("%d\n", a[i]);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}