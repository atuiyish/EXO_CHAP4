#include <stdio.h>

int main()
{
    int n,i;
    double resultat;
    printf("Entrez le nombre (nbre entier plus grand ou égal à 0) dont il faut calculer la factorielle :\n");
    scanf("%d",&n);
    resultat = 1;
    for (i=1;i <= n;i++)
    {
        resultat = resultat * i;
    }
    printf("La factorielle de %d vaut %f\n",n,resultat);
}