/*****************************************************************//**
 * \file   dico.h
 * \brief  creation of the dictionary
 * 
 * \author Maxime LAZE : maxime.laze@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_2_3_H
#define HUFFMAN_2_3_H

#include <stdio.h>

#include "../../sdd.h"
/**
 * \brief gives the number of elements contained in a Node.
 * \param arbre is the Huffman tree which will be analyzed.
 * \return the number of elements.
 */
int nombre_element_arbre(Noeud *arbre);

/**
 * \brief path of the Huffman tree.
 * \param fichier corresponds to the file open berfore.
 * \param arbre is the Huffman tree.
 * \param chemin is a pointer on an int, a table which contained bits.
 * \param n is a counter to fill the table.
 */
void parcourir_arbre_dico(FILE *fichier, Noeud *arbre, int *chemin, int n);

/**
 * \brief write in a text file the dictionary.
 * \param fichier corresponds to the file open berfore.
 * \param caractere the caractere to put in the dictionary.
 * \param code_binaire hte binary code associated to the caractere.
 * \param n is the long of the binary code.
 */
void ecrire_ligne_dico(FILE *fichier, char caractere, int *code_binaire, int n);

/**
 * \brief the main fonction used as a main which call the other fonction.
 * \param arbre the Huffman tree.
 */
void ecrire_dico(Noeud *arbre);

#endif //HUFFMAN_2_3_H
