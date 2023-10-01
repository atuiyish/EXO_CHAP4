#include <stdio.h>

int main()
{
    int compteur,valeur,valeur_cherchee;

    compteur = 0;
    printf("Entrez la valeur (nombre entier différent de -1) à rechercher\n");
    scanf("%d",&valeur_cherchee);
    printf("Entrez une série de nombre terminées par -1\n");
    scanf("%d",&valeur);
    while (valeur != -1)
    {
        if (valeur == valeur_cherchee)
            compteur = compteur + 1;
        printf("Entrez une valeur\n");
        scanf("%d",&valeur);   
    }
    printf("Le nombre de fois que vous avez entré la valeur %d\n",valeur_cherchee);
    printf("dans la séquence est %d\n",compteur);
}