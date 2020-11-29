#ifndef HUFFMAN_SDD_H
#define HUFFMAN_SDD_H

typedef struct Element {
    struct Element *suivant;
    char caractere;
    int occur;
} Element;

typedef struct lNoeud {
    struct lNoeud *suivant;
    struct Noeud *valeur;
} lNoeud;

typedef struct Noeud {
    struct Noeud *gauche;
    struct Noeud *droite;
    char caractere;
    int occur;
} Noeud;

void afficher_liste(Element *);

void afficher_arbre(Noeud *);

void afficher_feuille(Noeud *);

#endif //HUFFMAN_SDD_H
