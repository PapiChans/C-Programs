#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int sze;

    printf("--------------------------\n");
    printf("Number Occurrence in Array\n");
    printf("--------------------------\n");

    printf("How many elements in an array?: ");
    scanf("%d",&sze);

    int num[sze],i;

    for (i = 0; i < sze; i++){
        printf("\nEnter a number in Array %d: ",i);
        scanf("%d",&num[i]);
    }

    printf("\n");
    for (i = 0; i < sze; i++){
    printf("%d, ",num[i]);
    }

    int sch,cnt = 0;
    printf("\nEnter the number you want to search?: ");
    scanf("%d",&sch);

    for (i = 0; i < sze; i++){
     if (num[i] == sch){
        cnt++;
     }
    }

    printf("\nThere are %d Occurrence/s on Number %d",cnt,sch);

    getch();
    return 0;
}
