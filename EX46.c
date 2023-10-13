#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nbr,a,b;

    system("clear");
    for (i = 0, a = 0; i < 5 && nbr >= 0 && nbr <= 20; i++)
    {
        printf("Entrez une cote entre 0 et 20 :\n");
        scanf("%d",&nbr);
        system("clear");
        a = nbr + a;

        for (b = a - nbr;nbr < 0 || nbr > 20;)
        {
            printf("ERROR !\n");
            printf("Entrez une cote entre 0 et 20 :\n");
            scanf("%d",&nbr);
            
            if (nbr >= 0 && nbr <= 20)
            {
                system("clear");
                a = nbr + b;
                printf("%d correct\n\v",nbr);
            } 
        }
    }
    printf("La moyenne est de %d%%\n",a);
    return 0;
}