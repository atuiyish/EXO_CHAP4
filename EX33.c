#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,i,b;

    system("clear");
    printf("Entrez la valeur de a :\n");
    scanf("%d",&a);
    system("clear");
    printf("Entrez la valeur de n : \n");
    scanf("%d",&n);
    system("clear");

    for (i = 1,b = a; i < n; i++)
    {
        b = a * b;
    }
    printf("%d\n",b);
    return 0;
}