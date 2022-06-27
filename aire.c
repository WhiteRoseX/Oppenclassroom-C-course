//
//  aire.c
//  TesttOnC
//
//  Created by WhiteRose on 12/06/2022.
//

#include <stdio.h>
#include <ctype.h>
#include "aire.h"

float aireRectangle(float largeur, float hauteur)
{
    float aire = largeur * hauteur;
    printf("L'aire du rectangle qui prends pour hauteur %f et pour largeur %f est %f \n", hauteur, largeur, aire);
    return 0;
}

int triple(int nombre)
{
    return 3 * nombre;
}


void decoupe_minutes(int *pointeurHeure,int *pointeurMinute)
{
    *pointeurHeure = *pointeurMinute / 60;
    *pointeurMinute = *pointeurMinute % 60;
}

void afficheTableau (int tableau[], int tailleTableau)
{
    int i;
    for (i = 0; i < tailleTableau; i++) {
        printf("%d\n", tableau[i]);
    }
}

void moyenneTableau (int tableau[], int tailleTableau)
{
    int resultat = 0, i;
    for (i = 0; i<tailleTableau; i++) {
        resultat += tableau[i];
    }
    resultat = resultat / tailleTableau;
    printf("La moyenne de ce tableau est %d \n", resultat);
}

void sommeTableau (int tableau[], int tailleTableau)
{
    int resultat = 0, i;
    for (i = 0; i<tailleTableau; i++) {
        resultat += tableau[i];
    }
    printf("La somme des valeures du tableau est %d \n", resultat);
}

int tailleMot(char mot[])
{
    int nombreLettres = 0;
    for (int i = 0; mot[i] != '\0'; i++) {
        nombreLettres++;
    }
    return nombreLettres;
}


void initTableau (int *lettreTrouvee, int taille)
{
    for (int i = 0; i < taille; i++) {
        lettreTrouvee[i] = 0;
    }
}

int gagner(int nombreLettre, int *lettreTrouvee)
{
    int joueurGagne = 1;
    
    for (int i = 0; i < nombreLettre; i++) {
        if (lettreTrouvee[i] == 0 ) {
            joueurGagne = 0;
        }
    }
    return joueurGagne;
}

char lireCaractere ()
{
    char caractere = 0;
    
    caractere = getchar();
    caractere = toupper(caractere);
        
    while (getchar() != '\n');
    
    return caractere;
}

int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee)
{
    int i = 0;
    int bonneLettre = 0;

    // On parcourt motSecret pour vérifier si la lettre proposée y est
    for (i = 0 ; motSecret[i] != '\0' ; i++)
    {
        if (lettre == motSecret[i]) // Si la lettre y est
        {
            bonneLettre = 1; // On mémorise que c'était une bonne lettre
            lettreTrouvee[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
        }
    }

    return bonneLettre;
}
