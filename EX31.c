#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;

    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%d",&a);
    system("clear");

    for (i = a; i >= 1 ; i--)
    {
        if (a % i == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}