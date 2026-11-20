#include <stdio.h>

int main() {
    char str[1000];
    int last[256];
    int start = 0, maxLength = 0;

    scanf("%999s", str);

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        int length = i - start + 1;

        if (length > maxLength)
            maxLength = length;
    }

    printf("%d\n", maxLength);

    return 0;
}