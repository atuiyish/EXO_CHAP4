#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int i;

    system("clear");
    printf("Entrez une phrase :\n");
    for (i = 0;a != '.';)
    {
        scanf("%c",&a);
        if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
            i++;
    }
    system("clear");
    printf("Il y a %d mot(s) dans la phrase\n",i);
    return 0;
}