#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a;
    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%d",&a);
    system("clear");

    while ((a % 2 != 0 && a != 1)|| a == 2 )
    {
        printf("%d est un nombre premier\n",a);
        return 0;
    }
    printf("%d n'est pas un nombre premier\n",a);
    return 0;
}