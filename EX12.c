#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    while (i<=60)
    {
        if (!(60%i))
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;   
}