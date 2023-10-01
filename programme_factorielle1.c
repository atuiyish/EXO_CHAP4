#include <stdio.h>

int main()
{
    int n,i;
    long resultat;
    printf("Entrez le nombre (nbre entier plus grand ou égal à 0) dont il faut calculer la factorielle :\n");
    scanf("%d",&n);
    i = 1;
    resultat = 1;
    while (!(i>n))
    {
        resultat = resultat * i;
        i = i+1;
    }
    printf("La factorielle de %d vaut %ld\n",n,resultat);
}