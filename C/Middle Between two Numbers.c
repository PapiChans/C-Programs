#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int fnum,snum,mnum;

    printf("--------------------------\n");
    printf("Middle Between two Numbers\n");
    printf("--------------------------\n");

    printf("Enter first number: ");
    scanf("%d",&fnum);

    printf("\nEnter second number: ");
    scanf("%d",&snum);

    mnum = (fnum / 2) + (snum / 2);

    printf("\nThe number between %d and %d is %d",fnum,snum,mnum);

    getch();
    return 0;
}
