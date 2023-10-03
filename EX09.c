#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inf,sup;

    system("clear");
    printf("Entrez deux nombres inferieur et supérieur :\n");
    scanf("%d",&inf);
    scanf("%d",&sup);
    system("clear");

    while (inf<=sup)
    {
        if (!(inf%6) && !(inf%8))
        {
            printf("%d\n",inf);
        }
        inf++;   
    }
    return 0;
}