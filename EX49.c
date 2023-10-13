#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,a,b,result;

    system("clear");
    for (i = -1,b = 0; a != -1; i++)
    {
        printf("Entrez un nombre :\n");
        scanf("%f",&a);
        system("clear");
        b = a + b;
        if (a == -1)
            b = b + 1;
        
    }
    printf("La moyenne est de %.2f\n",b / i);
    return 0;
}