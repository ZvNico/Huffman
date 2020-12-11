#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../../headers/1/b.h"

int *convert_ascii_8bit(int ascii) {
    int cpt = 7;
    int i = 0;
    int *tab = (int *) calloc(8, sizeof(int));
    while (ascii != 0) {
        if (ascii / pow(2, cpt) >= 1) {
            tab[i] = 1;
            ascii -= (int) pow(2, cpt);
        }
        cpt--;
        i++;
    }
    return tab;
}

void lecture_fichier() {
    char *texte = NULL;
    int nb_carac;
    int *tab_8bit = NULL;
    FILE *fichier = NULL;
    FILE *fichier2 = NULL;
    nb_carac = taille_fichier("Alice.txt");
    texte = (char *) malloc(sizeof(char) * nb_carac);
    fichier = fopen("Alice.txt", "r");
    fgets(texte, nb_carac + 1, fichier);
    fclose(fichier);
    fichier2 = fopen("Output.txt", "w");
    for (int i = 0; i < nb_carac; i++) {
        tab_8bit = convert_ascii_8bit((int) texte[i]);
        for (int j = 0; j < 8; j++) {
            fprintf(fichier2, "%d", tab_8bit[j]);
        }
        free(tab_8bit);
    }
    fclose(fichier2);
}



