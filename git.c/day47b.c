#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, maxStart = 0;
    int len = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            if (len == 0)
                start = i;

            len++;
        }
        else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }

            len = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}