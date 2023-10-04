#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,a,b=0;

    system("clear");
    printf("Entrez 4 nombres :\n");

    do
    {
        scanf("%d",&a);
        b=a+b;
        i++;
    } while (i<=3);
    system("clear");
    printf("%d\n",b/i);
    return 0;
}