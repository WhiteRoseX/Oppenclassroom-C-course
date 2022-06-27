//
//  aire.h
//  TesttOnC
//
//  Created by WhiteRose on 12/06/2022.
//

#ifndef aire_h
#define aire_h

float aireRectangle(float largeur, float hauteur);
int triple(int nombre);
void decoupe_minutes(int *pointeurHeure,int *pointeurMinute);
void afficheTableau (int *tableau, int tailleTableau);
void moyenneTableau (int tableau[], int tailleTableau);
void sommeTableau (int tableau[], int tailleTableau);
int tailleMot(char mot[]);
void initTableau (int *lettreTrouvee, int taille);
int gagner(int nombreLettre, int *lettreTrouvee);
char lireCaractere ();
int rechercheLettre(char lettre, char motSecret[], int* lettreTrouvee);

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

typedef enum Volume Volume;
enum Volume
{
    FAIBLE = 10, MOYEN = 50, FORT = 100
};

#endif /* aire_h */

