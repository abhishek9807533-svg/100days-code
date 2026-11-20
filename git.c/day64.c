#include <stdio.h>

int main() {
    int n, m, a[1000], b[1000];
    int result[2000], count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < count; j++) {
            if (result[j] == a[i]) {
                found = 1;
                break;
            }
        }

        if (!found)
            result[count++] = a[i];
    }

    for (int i = 0; i < m; i++) {
        int found = 0;

        for (int j = 0; j < count; j++) {
            if (result[j] == b[i]) {
                found = 1;
                break;
            }
        }

        if (!found)
            result[count++] = b[i];
    }

    for (int i = 0; i < count; i++)
        printf("%d ", result[i]);

    return 0;
}