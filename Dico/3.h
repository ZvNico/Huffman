#ifndef HUFFMAN_3_H
#define HUFFMAN_3_H

#include <stdio.h>

#include "../../sdd.h"

int nombre_element_arbre(Noeud *);

void parcourir_arbre_dico(FILE *, Noeud *, int *, int);

void ecrire_ligne_dico(FILE *, char, int *, int);

void ecrire_dico(Noeud *);

#endif //HUFFMAN_3_H
