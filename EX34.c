#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,i=1,b;

    system("clear");
    printf("Entrez la valeur de a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Entrez la valeur de n : \n");
    scanf("%d",&n);
    system("clear");

    b = a;

    do
    {
        b = a * b;
        i++;
    } while (i < n);
    printf("%d\n",b);
    return 0;
}