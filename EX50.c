#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%f",&a);
    for (b = a,c = a; a != 0;)
    {
        system("clear");
        printf("Entrez un nombre :\n");
        if (a > b)
        {
            b = a;
        }
        if (a < c)
        {
            c = a;
        }
        scanf("%f",&a);
    }
    system("clear");
    printf("Le maximum est %.2g et le minimum est %.2g\n",b,c);
    return 0;
}