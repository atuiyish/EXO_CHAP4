#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,a,b=0;

    system("clear");
    printf("Entrez 7 nombres :\n");

    do
    {
        scanf("%d",&a);
        b=a+b;
        i++;
    } while (i<=7);
    system("clear");
    printf("%d\n",b);
    return 0;
}