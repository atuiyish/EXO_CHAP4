#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;
    short n;

    system("clear");
    printf("Entrez un nombre entier :\n");
    scanf("%hd",&n);
    system("clear");

    if (n > 0)
    {
        for (i = 0; n > 0; i++)
        {
            for (i = n - 1; i >= 1; i--)
            {
                a = n * i;
                n = a;
            }
            printf("%hd\n\v",n);
            printf("Réintroduire une nouvelle valeur entière :\n");
            scanf("%hd",&n);
            system("clear");
        }
    }
    else
    return 0;
}