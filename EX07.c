#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=9;

    while (i<=121)
    {
        if (!(i%6) && !(i%8))
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}