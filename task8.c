#include <stdio.h>

int main() {
    int code=5555,entry;
    while(entry!=code){
        printf("Enter the passcode : ");
        scanf("%d",&entry);
        if (entry!=code)
            printf("Invalid code!\n");
    }if (entry==code){
        printf("Access granted!");
    }

    return 0;
}
