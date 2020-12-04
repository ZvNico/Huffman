#include <stdio.h>
#include <stdlib.h>

#include "4.h"

int nombre_element_arbre(Noeud *arbre) {
    if (arbre == NULL) {
        return 0;
    }
    return (1 + nombre_element_arbre(arbre->gauche) + nombre_element_arbre(arbre->droite));
}

void parcourir_arbre_dico(FILE *fichier, Noeud *arbre, int *chemin, int n) {
    if (arbre == NULL) {
        return;
    }
    if ((arbre->gauche == NULL) && (arbre->droite == NULL)) {
        ecrire_ligne_dico(fichier, arbre->caractere, chemin, n);
        return;
    }
    n += 1;
    chemin[n] = 0;
    parcourir_arbre_dico(fichier, arbre->gauche, chemin, n);
    chemin[n] = 1;
    parcourir_arbre_dico(fichier, arbre->droite, chemin, n);
}

void ecrire_ligne_dico(FILE *fichier, char caractere, int *code_binaire, int n) {
    fputc(caractere, fichier);
    fputc(':', fichier);
    for (int i = 0; i < n; i++) {
        fprintf(fichier, "%d", code_binaire[i]);
    }
    fputc('\n', fichier);
}

void ecrire_dico(Noeud *arbre) {
    FILE *fichier = fopen("dico.txt", "w");
    int n = nombre_element_arbre(arbre);
    int *chemin = (int *) malloc(n * sizeof(int));
    parcourir_arbre_dico(fichier, arbre, chemin, -1);
    fclose(fichier);
}
