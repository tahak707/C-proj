#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ID;
    int TWH;
    float APH;
    printf("Enter Employee ID:");
    scanf("%d",&ID);
    printf("Enter total worked hours per month:");
    scanf("%d",&TWH);
    printf("Enter amount received per hour:");
    scanf("%f",&APH);
    printf("Your Employee ID:%d",ID);
    printf("\nYour Salary for this month is:%.2f",TWH*APH);
}
