#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("--------------------------\n");
    printf("Find the Factorial of a number\n");
    printf("--------------------------\n");

    int num, cnt, fct = 1;
    printf("Enter a number: \n");
    scanf("%d",&num);

    printf("\n--------------------------\n");
    printf("The formula to find the factorial is:\n");
    printf("Factorial * Count \n");
    printf("--------------------------\n");

    for(cnt = 1; cnt <= num; cnt++)
    {
        fct = fct * cnt;
    }

    printf("The factorial of %d is %d\n",num,fct);

    getch();
    return 0;
}
