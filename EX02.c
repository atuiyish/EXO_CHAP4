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
    i = 1;
    while (i<=5)
    {
        printf("%d : %c\n",i,lettre);
        i++;
    }
    return 0;
}