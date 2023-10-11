#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,c=0,i=0;

    do
    {
        system("clear");
        printf("Entrez 7 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");

        if (a == 2)
        {
            b++;
        }
        if (a == 20)
        {
            c++;
        }
        i++;
    } while (i < 7);
    
    if (b && c)
    {
        printf("Le nombre 2 était présent %d fois et le nombre 20 était présent %d fois dans la séquence\n",b,c);
        return 0;
    }
    if (b)
    {
        printf("Le nombre 2 était présent %d fois dans la séquence\n",b);
        return 0;
    }
    if (c)
    {
        printf("Le nombre 20 était présent %d fois dans la séquence\n",c);
        return 0;
    }
    else
    printf("Le nombre 2 et 20 n'était pas présent dans la séquence\n");
    return 0;
}