#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i;

    for (i = 0; i < 6; i++)
    {
        system("clear");
        printf("Entrez 6 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");

        if (a == 50)
        {
            b++;
        }
    }
    if (b)
    {
        printf("Le nombre 50 était présent %d fois dans la séquence\n",b);
        return 0;
    }
    else
    printf("Le nombre 50 n'était pas présent dans la séquence\n");
    return 0;
}