#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i, found = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("-1");

    return 0;
}