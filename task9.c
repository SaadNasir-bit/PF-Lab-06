#include <stdio.h>

int main() {
    int N,total=0;
    printf("Enter the amount of tickets: ");
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        total = total + (i*100);
    }printf("Total revenue generated in dollars : %d",total);
    return 0;
}
