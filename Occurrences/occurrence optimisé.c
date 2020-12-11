#include <stdio.h>
#include <stdlib.h>

#include "../../sdd.h"
#include "../../headers/2/2.h"

int recherche_dicho(Noeud **noeuds, char carac, int n) {
    int inf = 0, sup = n - 1, mil, pos = -1;
    while ((inf <= sup) && (pos == -1)) {
        mil = (sup + inf) / 2;
        if (noeuds[mil]->caractere > carac) {
            sup = mil - 1;
        } else if (noeuds[mil]->caractere < carac) {
            inf = mil + 1;
        } else {
            pos = mil;
        }
    }
    if (pos != -1) {
        noeuds[pos]->occur += 1;
        return -1;
    }
    return inf;
}

Noeud **occurences_dicho(int *n) {
    FILE *fichier;
    char carac;
    int res, i;
    *n = 0;
    Noeud **tab_noeuds = (Noeud **) malloc(sizeof(Noeud *) * 128);
    fichier = fopen("Alice.txt", "r+");
    carac = (char) fgetc(fichier);
    tab_noeuds[*n] = creer_noeud(1, carac);
    *n += 1;
    while (carac != EOF) {
        carac = (char) fgetc(fichier);
        res = recherche_dicho(tab_noeuds, carac, *n);
        if (res != -1) {
            for (i = *n + 1; i >= res; i--) {
                tab_noeuds[i + 1] = tab_noeuds[i];
            }
            tab_noeuds[res] = creer_noeud(1, carac);
            *n += 1;
        }
    }
    tab_noeuds = (Noeud **) realloc(tab_noeuds, sizeof(Noeud) * *n);

    return tab_noeuds;
}