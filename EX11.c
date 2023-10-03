#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    do
    {
        if (!(60%i))
        {
            printf("%d\n",i);
        }
        i++;
    } while (i<=60);
    return 0;   
}