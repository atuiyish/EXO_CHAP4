#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n;
    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%d",&n);
    system("clear");
    
    if (n <= 1)
        {
            printf("%d n'est pas un nombre premier.\n", n);
            return 0;
        }
    do
    {
        if (n % i == 0)
        {
            printf("%d n'est pas un nombre premier.\n", n);
            return 0;
        }
        i++;
    } while (i < n);
    printf("%d est un nombre premier.\n", n);
    return 0;   
}