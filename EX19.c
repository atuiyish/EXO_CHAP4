#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b=0;

    system("clear");
    printf("Entrez 5 nombres :\n");

    for (i=0;i<=4;i++)
    {
        scanf("%d",&a);
        b=a+b;
    }
    system("clear");
    printf("%d\n",b/i);
    return 0;
}