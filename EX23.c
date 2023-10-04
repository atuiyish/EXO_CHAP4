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
    i = a - 1;

    do
    {
        b = a * i;
        a = b;
        i--;
    } while (i>=1);
    system("clear");
    printf("%d\n",b);
    return 0;
}