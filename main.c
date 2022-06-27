//
//  main.c
//  TesttOnC
//
//  Created by WhiteRose on 09/06/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "aire.h"
#include <string.h>
#include <unistd.h>
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");


int main(int argc, const char * argv[]) {
    
//    int nombreChoisi = 0, nombreTriple = 0;
//    float h = 0, l = 0;
//    int minutes = 0, heures = 0;
//    int tableau[5] = {0}, i = 0;
//    int tableau2[] = {5, 10};
//
//    printf("Entrez un nombre... ");
//    scanf("%d", &nombreChoisi);
//
//    nombreTriple = triple(nombreChoisi);
//    printf("Le triple de %d est %d \n", nombreChoisi, nombreTriple);
//
//    printf("Calculer l'aire d'un rectangle...  saisisez une hauteur puis une largeur : \n");
//    scanf("%f", &h);
//    scanf("%f", &l);
//    aireRectangle(l, h);
//
//    printf("Bienvenue dans le convertisseur horaire, veuillez rentrer un nombre de minute :\n");
//    scanf("%d", &minutes);
//    decoupe_minutes( &heures, &minutes);
//    printf("Conversion en cours... \n");
//    printf("%d heures et %d minutes \n", heures, minutes);
//
//    for (i = 0; i < 5; i++) {
//        tableau[i] = i;
//    }
//
//    afficheTableau(tableau, 5);
//    moyenneTableau(tableau2, 2);
//    sommeTableau(tableau2, 2);
//    return 0;
    char lettre = 0;
    char motSecret[] = "POLAINE";
    int nombreLettre = tailleMot(motSecret);
    int coupsRestant = 10;
    int *lettreTrouvee = NULL;
    lettreTrouvee = malloc(nombreLettre * sizeof(int));
    initTableau(lettreTrouvee, nombreLettre);
    
    printf("Bienvenue dans le jeu du pendu \n");
    
    while (coupsRestant > 0 && !gagner(nombreLettre, lettreTrouvee)) {
        
        printf("\nIl vous reste %d coups à jouer \n", coupsRestant);
        printf("Devinez le mot secret : ");
        
        for (int i = 0; i < nombreLettre; i++) {
            if (lettreTrouvee[i]) {
                printf("%c", motSecret[i]);
            }
            else{
                printf("*");
            }
        }
        
        printf("\nProposez une lettre :");
        lettre = lireCaractere();
        
        if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            coupsRestant--;
        }
    }
    
    if (gagner(nombreLettre, lettreTrouvee)) {
        printf("\nBravo le mot secret était %s \n", motSecret);
    }
    else{
        printf("\nPerdu, le mot secret était %s", motSecret);
    }
    
    int* memoireAllouee = NULL; // On crée un pointeur sur int

    memoireAllouee = malloc(sizeof(int)); // La fonction malloc inscrit dans notre pointeur l'adresse qui a été reservée.
    
    char prenom[100];
    
    printf("Veuillez entrer votre prénom :\n");
    scanf("%s", prenom);
    printf("Enchanté %s, bienvenue sur notre plateforme. \n", prenom);
    RACONTER_SA_VIE()
    FILE* fichier = NULL;

     fichier = fopen("test.txt", "r+");

     if (fichier != NULL)
     {
         fputc('A', fichier);
         fclose(fichier);
     }

    int nombreDAmis = 0, i = 0;
    int* ageAmis = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

    // On demande le nombre d'amis à l'utilisateur
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nombreDAmis);

    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la mémoire pour le tableau
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(ageAmis);
    }

    
    
        return 0;
}


//strlen pour calculer la longueur d'une chaîne.
//
//strcpy pour copier une chaîne dans une autre.
//
//strcat pour concaténer 2 chaînes.
//
//strcmp pour comparer 2 chaînes.
//
//strchr pour rechercher un caractère.
//
//strpbrk pour rechercher le premier caractère de la liste.
//
//strstr pour rechercher une chaîne dans une autre.
//
//sprintf pour écrire dans une chaîne.
