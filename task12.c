#include <stdio.h>

int main() {
    int spaces = 50;
    int entry = 1;
    while(spaces > 0 && entry != 0)
    {
        printf("Enter 1 to park a car (0 to stop): ");
        scanf("%d", &entry);
        if(entry == 1)
        {
            spaces--;
            printf("Car parked.\n");
            printf("Remaining spaces: %d\n", spaces);
        }
        else if(entry == 0)
        {
            printf("Parking closed.\n");
        }
    }
    if(spaces == 0)
    {
        printf("Parking full.\n");
    }
    return 0;
}
