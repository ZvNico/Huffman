#include <stdio.h>
#include <stdlib.h>

#include "../sdd/sdd.h"

void ajouter_element(Element **liste, char carac) {
    Element *nouv;
    Element *temp; // permet d'avoir un pointeur sur le dernier élément de la liste
    nouv = (Element *) malloc(sizeof(Element));
    nouv->caractere = carac;
    nouv->occur = 1;
    nouv->suivant = NULL;
    temp = *liste;
    if (*liste == NULL) {
        *liste = nouv;
    } else {
        while (temp->suivant != NULL) {
            temp = temp->suivant;
        }
        temp->suivant = nouv;
    }
}

int incrementer_occurence(Element *liste, char carac) {
    Element *temp = liste;
    int boolean = 0; // Booléen vaut 0 pour FAUX et 1 pour VRAI
    if (liste != NULL) {
        do {
            if (temp->caractere == carac) {
                boolean = 1;
                temp->occur = temp->occur + 1;
            } else {
                temp = temp->suivant;
            }
        } while ((temp != NULL) && (boolean != 1));
    }
    return boolean;
}

Element *occurences(char *nom_fichier) {
    FILE *fichier;
    char caract;
    Element *liste = NULL;
    fichier = fopen(nom_fichier, "r+");
    caract = (char) fgetc(fichier);
    while (caract != EOF) {
        if (incrementer_occurence(liste, caract) == 0) {
            ajouter_element(&liste, caract);
        }
        caract = (char) fgetc(fichier);
    }
    return liste;
}
