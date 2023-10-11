#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i=0;

    do
    {
        system("clear");
        printf("Entrez 10 nombres entiers :\n");
        scanf("%d",&a);
        system("clear");

        if (a == 8)
        {
            b = a;
        }
        i++;
    } while (i < 10);

    if (b)
    {
        printf("Le nombre 8 était présent dans la séquence\n");
        return 0;
    }
    else
    printf("Le nombre 8 n'était pas présent dans la séquence\n");
    return 0;
}