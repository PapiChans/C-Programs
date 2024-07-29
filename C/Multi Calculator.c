#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int fnum,snum;

    printf("--------------------------\n");
    printf("Multi Calculator\n");
    printf("--------------------------\n");

    printf("Enter first number: \n");
    scanf("%d",&fnum);

    printf("Enter second number: \n");
    scanf("%d",&snum);

    printf("\nHere are the results\n");
    printf("Addition: %d + %d = %d\n",fnum,snum,fnum + snum);
    printf("Subtraction: %d - %d = %d\n",fnum,snum,fnum - snum);
    printf("Multiplication: %d X %d = %d\n",fnum,snum,fnum * snum);
    printf("Division: %d / %d = %d\n",fnum,snum,fnum / snum);

    getch();
    return 0;
}
