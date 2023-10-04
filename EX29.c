#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;

    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%d",&a);
    system("clear");

    i = a;

    do
    {
        if (a % i == 0)
        {
            printf("%d\n",i);
        }
        i--;
    } while (i >= 1);
    return 0;
}