#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int count[256] = {0};
    int i, anagram = 1;

    scanf("%999s", str1);
    scanf("%999s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str1[i];
        count[ch]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str2[i];
        count[ch]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}