#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b=1;

    system("clear");
    printf("Entrez 5 nombres :\n");

    for (i=1;i<=5;i++)
    {
        scanf("%d",&a);
        b=a*b;
    }
    system("clear");
    printf("%d\n",b);
    return 0;
}