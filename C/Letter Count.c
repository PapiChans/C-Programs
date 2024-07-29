#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("--------------------------\n");
    printf("Letter Counter\n");
    printf("--------------------------\n");

    printf("Enter a Word: \n");
    char c[100];
    scanf("%s", &c);

    int cnt = 0;
    for(int i = 0; i < strlen(c); i++)
    {
        cnt++;
    }

    printf("\nThe letters of a string is: %d",cnt);

    getch();
    return 0;
}
