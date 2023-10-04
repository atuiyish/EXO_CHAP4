#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,a,b=1;

    system("clear");
    printf("Entrez 4 nombres :\n");

    do
    {
        scanf("%d",&a);
        b=a*b;
        i++;
    } while (i<=4);
    system("clear");
    printf("%d\n",b);
    return 0;
}