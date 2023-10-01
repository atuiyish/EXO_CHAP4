#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre;
    int i;

    system("clear");
    printf("Entrez la première lettre de votre nom :\n");
    scanf("%c",&lettre);
    system("clear");

    for (i = 1;i <= 5; i++)
    {
        printf("%d : %c\n",i,lettre);
    }
    return 0;
}