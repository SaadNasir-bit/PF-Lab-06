#include <stdio.h>

int main() {
    int salary;
    printf("Enter salary of employee : ");
    scanf("%d",&salary);
    for (int i=1;i<=10;i++){
        salary = salary*1.05;
    }printf("Salary after 10 years : %d",salary);
}
