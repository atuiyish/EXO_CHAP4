#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    system("clear");
    printf("Entrez un nombre :\n");
    scanf("%d",&n);
    system("clear");
    
    if (n <= 1)
        {
            printf("%d n'est pas un nombre premier.\n", n);
            return 0;
        }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d n'est pas un nombre premier.\n", n);
            return 0;
        }
    }
    printf("%d est un nombre premier.\n", n);
    return 0;   
}