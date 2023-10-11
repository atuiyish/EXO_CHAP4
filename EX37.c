#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;

    do
    {
        system("clear");
        printf("Entrez une lettre :\n");
        fflush(stdin);
        scanf("%c",&car);
    } while (car < 'A' || car > 'Z' && car < 'a' || car > 'z');

    return 0;
}