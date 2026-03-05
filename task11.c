#include <stdio.h>

int main() {
    float price, total = 0;
    int choice;
    do{
        printf("Enter item price: ");
        scanf("%f", &price);
        total += price;
        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while(choice == 1);
    if(total > 3000)
    {
        total = total*0.90;
        printf("10%% discount applied\n");
    }
    printf("Final bill: %.2f\n", total);
    return 0;
}
