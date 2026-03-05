#include <stdio.h>

int main() {
    int N,total=0;
    printf("Enter the number of days : ");
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        total=total+i;
    }printf("The total distance covered in %d days is: %d",N,total);
}
