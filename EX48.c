#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    float x,y,z,U;

    system("clear");
    for (N = 2;N == 2 || N == 3;)
    {
        printf("Entrez N nombres :\n");
        scanf("%d",&N);
        system("clear");

        switch (N)
        {
        case 2:
            printf("Entrez x :\n");
            scanf("%f",&x);
            system("clear");
            printf("Entrez y :\n");
            scanf("%f",&y);
            system("clear");
            
            U = sqrt(pow(x,2) + pow(y,2));

            printf("La norme de U vaut %.3g\n",U);
            return 0;
        case 3:
            printf("Entrez x :\n");
            scanf("%f",&x);
            system("clear");
            printf("Entrez y :\n");
            scanf("%f",&y);
            system("clear");
            printf("Entrez z :\n");
            scanf("%f",&z);
            system("clear");
            
            U = sqrt(pow(x,2) + pow(y,2) + pow(z,2));

            printf("La norme de U vaut %.3g\n",U);
            return 0;
        }
    }
    printf("ERROR !\n");
    return 0;
}