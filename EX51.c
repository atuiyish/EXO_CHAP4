#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;

    system("clear");
    for (i = 0;a != -1;)
    {
        printf("Entrez nombre :\n");
        scanf("%d",&a);

        if (a > 0 && a % 2 == 0)
        {
            i++;
        }
        system("clear");
    }
    printf("Il y a %d nombre(s) entier(s) pair(s) positif(s)\n",i);
    return 0;
}