#include <stdio.h>

int main() {
    int n, a[1000];
    int answer = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                answer = a[i];
                break;
            }
        }

        if (answer != -1)
            break;
    }

    printf("%d\n", answer);

    return 0;
}