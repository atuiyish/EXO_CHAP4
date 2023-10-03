#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b=0;

    system("clear");
    printf("Entrez 7 nombres :\n");

    for (i=1;i<=7;i++)
    {
        scanf("%d",&a);
        b=a+b;
    }
    system("clear");
    printf("%d\n",b);
    return 0;
}