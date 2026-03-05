#include <stdio.h>

int main() {
    int dailyunits,entries=0,total=0;
    float average;
    printf("Enter the daily usage of units (-999 to exit): ");
    scanf("%d",&dailyunits);
    while(dailyunits!=-999){
        total=total+dailyunits;
        entries++;
        printf("Enter the daily usage of units (-999 to exit): ");
        scanf("%d",&dailyunits);
    }average = total/entries;
    printf("Average consumption : %lf",average);
}
