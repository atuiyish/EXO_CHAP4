#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,a,b=1;

    system("clear");
    printf("Entrez 6 nombres :\n");

    while (i<=6)
    {
        scanf("%d",&a);
        b=a*b;
        i++;
    }
    system("clear");
    printf("%d\n",b);
    return 0;
}