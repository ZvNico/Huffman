#include <stdio.h>

#include "sdd.h"

void afficher_liste(Element *liste) {
    if (liste != NULL) {
        printf("caractere : %c , occurence : %d\n", liste->caractere, liste->occur);
        afficher_liste(liste->suivant);
    } else {
        printf("Fin de liste");
    }
}

void afficher_arbre(Noeud *arbre) {
    if (arbre != NULL) {
        if (arbre->caractere != EOF) {
            printf("%c | ", arbre->caractere);
        }
        printf("%d\n", arbre->occur);
        afficher_arbre(arbre->gauche);
        afficher_arbre(arbre->droite);
    }
}

void afficher_feuille(Noeud *arbre) {
    if (arbre != NULL) {
        if (arbre->caractere != EOF) {
            printf("%c | %d\n", arbre->caractere, arbre->occur);
        }
        afficher_feuille(arbre->gauche);
        afficher_feuille(arbre->droite);
    }
}