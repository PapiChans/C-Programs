#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("--------------------------\n");
    printf("Leap Year\n");
    printf("--------------------------\n");
    printf("Enter the Year: ");
    scanf("%d",&year);

    if (((year % 4 == 0) && (year % 100!= 0)) || (year% 400 == 0)){
        printf("\n--------------------------\n");
        printf("The year %d is a leap year", year);
        printf("\n--------------------------\n");
    }
   else{
        printf("\n--------------------------\n");
        printf("The year %d is not a leap year", year);
        printf("\n--------------------------\n");
   }

    getch();
    return 0;
}
