#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;

    system("clear");
    printf("Entrez un nombres :\n");
    fflush(stdin);
    scanf("%d",&a);
    system("clear");

    for (i = a - 1; i >= 1; i--)
    {
        b = a * i;
        a = b;
    }
    system("clear");
    printf("%d\n",b);
    return 0;
}