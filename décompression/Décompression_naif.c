#include <stdio.h>
#include <stdlib.h>

#include "../../headers/1/b.h"
#include "../../sdd.h"

char get_carac(Noeud *arbre, char *texte, int *curseur) {
    if (arbre->caractere != EOF) {
        return arbre->caractere;
    }
    if (texte[*curseur] == '1') {
        *curseur += 1;
        return get_carac(arbre->droite, texte, curseur);
    } else {
        *curseur += 1;
        return get_carac(arbre->gauche, texte, curseur);
    }
}

void decodage(Noeud *arbre) {
    char *texte = NULL;
    int nb_carac, i = 0;
    FILE *dico, *fichier;
    FILE *fichier_decoder = fopen("decoder.txt", "w");

    nb_carac = taille_fichier("encoder.txt");
    texte = (char *) malloc(sizeof(char) * nb_carac);
    fichier = fopen("encoder.txt", "r");
    for (i = 0; i < nb_carac + 1; i++) {
        texte[i] = (char) fgetc(fichier);
    }
    fclose(fichier);
    i = 0;
    while ((texte[i] == '0') || (texte[i] == '1')) {
        fputc(get_carac(arbre, texte, &i), fichier_decoder);
    }
    fclose(fichier_decoder);
}
