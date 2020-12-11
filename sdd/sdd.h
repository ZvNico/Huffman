/*****************************************************************//**
 * \file   sdd.h
 * \brief  file that contains the corresponding data structures and display functions.
 * 
 * \author Maxime LAZE : maxime.laze@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_SDD_H
#define HUFFMAN_SDD_H

/**
 * \typedef struct Element.
 * \brief a list of character and her corresponding occurrences.
 */
typedef struct Element {
    struct Element *suivant;/** <the next element of the list*/
    char caractere;/** <the character at this position */
    unsigned int occur;/** <the number of occurrence of an character */
} Element;

/**
 * \typedef struct lNoeud.
 * \brief a list of Noeud.
 */
typedef struct lNoeud {
    struct lNoeud *suivant;/** <the next element of the list*/
    struct Noeud *valeur;/** <the Node at this position */
} lNoeud;

/**
 * \typedef struct Noeud.
 * \brief a Node of character and her corresponding occurrences.
 */
typedef struct Noeud {
    struct Noeud *gauche, *droite;/** <the node right and left of the node*/
    char caractere;/** <the character at this position */
    unsigned int occur;/** <the number of occurrence of an character */
} Noeud;

/**
 * \brief for print the elements of a structure Element.
 * \param liste the liste of characters and occurrences.
 */
void afficher_liste(Element *liste);

/**
 * \brief for print the elements of a structure Noeud.
 * \param arbre an Huffamn tree.
 */
void afficher_arbre(Noeud *arbre);

/**
 * \brief for print the leaves of a structure Noeud.
 * \param arbre an Huffamn tree.
 */
void afficher_feuille(Noeud *arbre);

#endif //HUFFMAN_SDD_H
