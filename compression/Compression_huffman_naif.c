#include <stdio.h>
#include <stdlib.h>

#include "../../headers/1/b.h"


void encodage(char *nom_fichier) {
    char *texte = NULL, *texte_dico = NULL;
    int nb_carac_fichier, nb_carac_dico, n, i, j, taille_code = 0;
    FILE *dico, *fichier;
    FILE *fichier_encoder = fopen("encoder.txt", "w");

    nb_carac_fichier = taille_fichier(nom_fichier);
    texte = (char *) malloc(sizeof(char) * nb_carac_fichier);
    fichier = fopen(nom_fichier, "r");
    for (i = 0; i < nb_carac_fichier + 1; i++) {
        texte[i] = (char) fgetc(fichier);
    }
    fclose(fichier);

    nb_carac_dico = taille_fichier("dico.txt");
    texte_dico = (char *) malloc(sizeof(char) * nb_carac_dico);
    dico = fopen("dico.txt", "r");
    for (i = 0; i < nb_carac_dico; i++) {
        texte_dico[i] = (char) fgetc(dico);
    }
    fclose(dico);

    for (n = 0; n < nb_carac_fichier; n++) {
        i = 0;
        taille_code = 0;

        while (texte_dico[i] != texte[n]) {
            i++;
        }
        i += 2;
        while ((texte_dico[i + taille_code] == '1') || (texte_dico[i + taille_code] == '0')) {
            taille_code++;
        }
        for (j = 0; j < taille_code; j++) {
            fprintf(fichier_encoder, "%d", texte_dico[i + j] - 48);
        }
    }
    free(texte);
    free(texte_dico);
    fclose(fichier_encoder);
}

