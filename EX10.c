#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i=0;i<=60;i++)
    {
        if (!(60%i))
        {
            printf("%d\n",i);
        }  
    }
    return 0;
}