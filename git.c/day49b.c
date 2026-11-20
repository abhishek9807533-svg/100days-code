#include <stdio.h>

int main() {
    char name[100];
    int i, start = 0, lastStart = 0;
    int len = 0, words = 0;

    fgets(name, sizeof(name), stdin);

    while (name[len] != '\0' && name[len] != '\n') {
        len++;
    }

    for (i = 0; i <= len; i++) {
        if (name[i] == ' ' || name[i] == '\0') {
            if (i > start) {
                words++;
                lastStart = start;
            }
            start = i + 1;
        }
    }

    if (words == 0) {
        printf("%s", name);
        return 0;
    }

    start = 0;

    for (i = 0; i < lastStart; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c. ", name[i]);
        }
    }

    printf("%s", name + lastStart);

    return 0;
}