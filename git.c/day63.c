#include <stdio.h>

int main() {
    int n, m, a[1000], b[1000];
    int printed[1000], count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        for (int k = 0; k < count; k++) {
            if (printed[k] == a[i]) {
                found = 0;
                break;
            }
        }

        if (found) {
            printf("%d ", a[i]);
            printed[count++] = a[i];
        }
    }

    return 0;
}