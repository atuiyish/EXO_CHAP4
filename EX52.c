#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a,b;

    system("clear");
    printf("Entrez une phrase :\n");
    for (i = 0;a != '.';)
    {
        fflush(stdin);
        scanf("%c",&a);
        if (b == 'L' && a == 'E')
        {
            i++;
        }
        b = a;
    }
    system("clear");
    printf("Il y a %d fois le couple 'LE' dans la phrase\n",i);
    return 0;
}