#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int n, start = 0, maxLength = 1;

    scanf("%999s", str);

    n = strlen(str);

    for (int i = 0; i < n; i++) {

        // Odd-length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {

            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }

            left--;
            right++;
        }

        // Even-length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < n &&
               str[left] == str[right]) {

            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }

            left--;
            right++;
        }
    }

    for (int i = start; i < start + maxLength; i++)
        printf("%c", str[i]);

    printf("\n");
