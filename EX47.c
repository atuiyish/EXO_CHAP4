#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,choix;

    system("clear");
    for (choix = 0;choix != 1;)
    {
        printf("Entrez votre âge :\n");
        scanf("%d",&age);
        system("clear");
        printf("1 : Confirmez la saisie\n2 : Annulez la saisie\n");
        scanf("%d",&choix);

        switch (choix)
        {
        case 2:
            system("clear");
            break;
        }
    }
    system("clear");
    printf("Vous aurez %d ans dans 10 ans\n",age + 10);
}