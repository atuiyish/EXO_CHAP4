#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,a,b=0;

    system("clear");
    printf("Entrez 6 nombres :\n");

    while (i<=5)
    {
        scanf("%d",&a);
        b=a+b;
        i++;
    }
    system("clear");
    printf("%d\n",b/i);
    return 0;
}