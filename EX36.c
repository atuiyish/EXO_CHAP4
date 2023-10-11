#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;

    system("clear");
    printf("Entrez une lettre :\n");
    fflush(stdin);
    scanf("%c",&car);
    system("clear");

    
    while (car < 'A' || car > 'Z' && car < 'a' || car > 'z')
    {   
        printf("Entrez une lettre :\n");
        fflush(stdin);
        scanf("%c",&car);
        system("clear");
    }
    return 0;
}