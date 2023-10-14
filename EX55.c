#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c;
    system("clear");
    srand(time(NULL));
    a = rand()%101;
    printf("Entrez un nombre :\n");

    for (c = 0;c == 0;)
    {
        scanf("%d",&b);
        
        if (b != a)
        {
            system("clear");
            printf("La valeur est entre %d et %d\n",a - rand()%11,a + rand()%11);
        }   
        else
            c = 1;
    }
    system("clear");
    printf("Bravo la réponse étais %d\n",a);
    return 0;    
}