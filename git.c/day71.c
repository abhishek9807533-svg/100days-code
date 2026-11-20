#include <stdio.h>

int main() {
    int n, a[1000], k;
    int maxLength = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += a[j];

            if (sum == k) {
                int length = j - i + 1;

                if (length > maxLength)
                    maxLength = length;
            }
        }
    }

    printf("%d\n", maxLength);

    return 0;
}