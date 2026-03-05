#include <stdio.h>

int main() {
    int code;
    int correctCode = 2468;
    do {
        printf("enter the access code: ");
        scanf("%d", &code);
        if (code != correctCode) {
            printf("incorrect code. try again.\n");
        }
    } while (code != correctCode);
    printf("access granted.\n");

    return 0;
}
