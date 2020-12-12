#include <stdio.h>
#include <stdlib.h>

#include "../sdd/sdd.h"

void free_elements(Element *l) {
    if (l == NULL) {
        return;
    }
    free_elements(l->suivant);
    free(l);
}

Noeud *pop_min(lNoeud **l) {
    lNoeud *temp = *l, *prec, *min = *l;

    while (temp->suivant != NULL) {
        if (min->valeur->occur > temp->suivant->valeur->occur) {
            min = temp->suivant;
            prec = temp;
        }
        temp = temp->suivant;
    }

    if (min != *l) {
        prec->suivant = min->suivant;
    } else {
        *l = (*l)->suivant;
    }
    return min->valeur;
}

Noeud *assemblage_noeuds(Noeud *n1, Noeud *n2) {
    Noeud *noeud = (Noeud *) malloc(sizeof(Noeud));
    noeud->occur = n1->occur + n2->occur;
    noeud->caractere = EOF;
    noeud->gauche = n1;
    noeud->droite = n2;
    return noeud;
}

Noeud *creer_noeud(int n, char c) {
    Noeud *noeud = (Noeud *) malloc(sizeof(Noeud));
    noeud->occur = n;
    noeud->caractere = c;
    noeud->droite = NULL;
    noeud->gauche = NULL;
    return noeud;
}

void push(lNoeud **ln, int n, char c) {
    lNoeud *lnoeud = (lNoeud *) malloc(sizeof(lNoeud));
    Noeud *noeud = creer_noeud(n, c);
    lnoeud->valeur = noeud;
    lnoeud->suivant = *ln;
    *ln = lnoeud;
}

void push_noeud(lNoeud **ln, Noeud *noeud) {
    lNoeud *lnoeud = (lNoeud *) malloc(sizeof(lNoeud));
    lnoeud->valeur = noeud;
    lnoeud->suivant = *ln;
    *ln = lnoeud;
}

lNoeud *lnoeud_from_elements(Element *l) {
    lNoeud *lnoeud = NULL;
    while (l != NULL) {
        push(&lnoeud, l->occur, l->caractere);
        l = l->suivant;
    }
    return lnoeud;
}

Noeud *arbre_huffman(Element *l) {
    lNoeud *temp = lnoeud_from_elements(l);
    Noeud *n1 = NULL;
    Noeud *n2 = NULL;
    Noeud *huff = NULL;
    free_elements(l);
    while ((temp != NULL) && (temp->suivant != NULL)) {
        n1 = pop_min(&temp);
        n2 = pop_min(&temp);
        if ((n1->caractere == EOF) && (n2->caractere == EOF)) {
            huff = assemblage_noeuds(n1, n2);
        } else if (n2->caractere == EOF) {
            huff = assemblage_noeuds(n1, n2);
        } else {
            huff = assemblage_noeuds(n2, n1);
        }
        push_noeud(&temp, huff);
    }
    return huff;
}

void affichage_huffman(Noeud *huff) {
    if (huff != NULL) {
        printf("occu : %d\n", huff->occur);
        affichage_huffman(huff->gauche);
        affichage_huffman(huff->droite);
    }
}
