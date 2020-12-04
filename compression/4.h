#ifndef 4_H_INCLUDED
#define 4_H_INCLUDED

#include "../../sdd.h"
#include "../../headers/2/3.h"

int nombre_element_arbre(Noeud *arbre);
void parcourir_arbre_dico(FILE *fichier, Noeud *arbre, int *chemin, int n);
void ecrire_ligne_dico(FILE *fichier, char caractere, int *code_binaire, int n);
void ecrire_dico(Noeud *arbre);

#endif // 4_H_INCLUDED
