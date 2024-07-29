#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("--------------------------\n");
    printf("Multiplication Table\n");
    printf("--------------------------\n");

    printf("Enter a Multiplicand: ");
    int mcd = 0;
    scanf("%d",&mcd);

    printf("\nEnter the range of the multiplier: ");
    int mtr = 0;
    scanf("%d",&mtr);

    printf("\n\nHere's the Result: \n");
    int i = 0,pdt;
    for (i = 0; i <= mtr; i++){
        pdt = mcd * i;
        printf("%d X %d = %d \n",mcd,i,pdt);
    }

    getch();
    return 0;
}
