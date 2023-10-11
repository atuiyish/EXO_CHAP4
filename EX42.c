#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,c=0,i=0;

    while (i < 10)
    {
        system("clear");
        printf("Entrez 10 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");

        if (a == 50)
        {
            b++;
        }
        if (a == 21)
        {
            c++;
        }
        i++;
    }
    if (b && c)
    {
        printf("Le nombre 50 était présent %d fois et le nombre 21 était présent %d fois dans la séquence\n",b,c);
        return 0;
    }
    if (b)
    {
        printf("Le nombre 50 était présent %d fois dans la séquence\n",b);
        return 0;
    }
    if (c)
    {
        printf("Le nombre 21 était présent %d fois dans la séquence\n",c);
        return 0;
    }
    else
    printf("Le nombre 50 et 21 n'était pas présent dans la séquence\n");
    return 0;
}