#ifndef HUFFMAN_2_2_H
#define HUFFMAN_2_2_H

#include "../../sdd.h"

void free_elements(Element *);

Element *pop_min(lNoeud **);

Noeud *assemblage_noeuds(Noeud *, Noeud *);

Noeud *creer_noeud(int, char);

void push(lNoeud **ln, int, char);

void push_noeud(lNoeud **, Noeud *);

lNoeud *lnoeud_from_elements(Element *);

Noeud *arbre_huffman(Element *);

void affichage_huffman(Noeud *);

#endif //HUFFMAN_2_2_H
