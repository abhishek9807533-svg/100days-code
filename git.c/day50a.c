#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4) {
        printf("%02d-Apr-%04d", dd, yyyy);
    }
    else {
        printf("Invalid month");
    }

    return 0;
}