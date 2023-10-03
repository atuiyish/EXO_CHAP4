#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=9;

    do
    {
        if (!(i%6) && !(i%8))
        {
            printf("%d\n",i);
        }
        i++;
    } while (i<=121);
    return 0;
}