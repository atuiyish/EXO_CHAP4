#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,i;

    system("clear");
    
    for (i = 0,srand(time(NULL)); i < 10; i++)
    {
        a = rand()%101;

        if (a % 2 == 0)
            printf("%d : Pairs\n",a);
        else
            printf("%d : Impairs\n",a);
    }
    return 0;
}