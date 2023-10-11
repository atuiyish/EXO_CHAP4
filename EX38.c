#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i;

    for (i = 0; i < 5; i++)
    {
        system("clear");
        printf("Entrez 5 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");
        if (a == 50)
        {
            b = a;
        }
    }
    if (b)
    {
        printf("Le nombre 50 était présent dans la séquence\n");
        return 0;
    }
    else
    printf("Le nombre 50 n'était pas présent dans la séquence\n");
    return 0;
}