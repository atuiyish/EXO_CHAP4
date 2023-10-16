#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,b,c;

    system("clear");
    printf("Entrez un nombre N :\n");
    scanf("%d",&n);
    system("clear");
    if (n == 0)
    {
        printf("%d\n",n);
        return 0;
    }
    for (i = 1,a = 0,b = 0,c = 1;i <= n && n > 0;i++)
    {
        printf("%d\n",c);
        b = a;
        a = c;
        c = a + b;
    }
    return 0;
}