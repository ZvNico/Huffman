#include <stdio.h>


int taille_fichier(char *nom) {
    FILE *fichier;
    int compteur = 0;
    fichier = fopen(nom, "r+");
    while (fgetc(fichier) != EOF) {
        compteur = compteur + 1;
    }
    fclose(fichier);
    return compteur;
}
