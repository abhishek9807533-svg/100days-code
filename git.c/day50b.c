#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0;

    scanf("%99s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}