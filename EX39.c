#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i=0;

    while (i < 7)
    {
        system("clear");
        printf("Entrez 7 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");

        if (a == 34)
        {
            b = a;
        }
        i++;
    }
    if (b)
    {
        printf("Le nombre 34 était présent dans la séquence\n");
        return 0;
    }
    else
    printf("Le nombre 34 n'était pas présent dans la séquence\n");
    return 0;
}