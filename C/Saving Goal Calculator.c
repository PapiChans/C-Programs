#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int gol,day,tot;

    printf("--------------------------\n");
    printf("Saving Goal Calculator\n");
    printf("--------------------------\n");

    printf("\nEnter your goal amount: ");
    scanf("%d",&gol);

    printf("\nEnter how many days to reach your goal: ");
    scanf("%d",&day);

    tot = gol / day;

    printf("\n\nYou need this amount:\n");
    printf("%d$ per day",tot);


    getch();
    return 0;
}
