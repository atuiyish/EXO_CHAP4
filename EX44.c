#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,nbr;

    system("clear");
    printf("Entrez une cote entre 0 et 10 :\n");
    scanf("%d",&nbr);
    system("clear");

    while (nbr < 0 || nbr > 10)
    {
        printf("ERROR !\n");
        printf("Entrez une cote entre 0 et 10 :\n");
        scanf("%d",&nbr);
        system("clear");
    }
    if (nbr < 5)
    {
        printf("%d : échec\n",nbr);
        return 0;
    }
    else
    printf("%d : réussite\n",nbr);
    return 0;
}