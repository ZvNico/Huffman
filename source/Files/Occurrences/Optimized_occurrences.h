/*****************************************************************//**
 * \file   occurence optimisé.h
 * \brief  adds an occurence to an array of nodes if the character has already been found, or adds the node of the character otherwise.
 * 
 * \author Maxime LAZE : maxime.laze@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_3_1_H
#define HUFFMAN_3_1_H

/**
 * \brief do the dichotomique research.
 * \param noeuds is a double pointeur on Noeud.
 * \param carac is the character which has just been read.
 * \param n is a int is the size of the list.
 * \return .
 */
int recherche_dicho(Noeud **noeuds, char carac, int n);

/**
 * \brief create a Node with the all of occurrences.
 * \param n is a pointeur on an int.
 * \return A Node with all of the occurrences.
 */
Noeud **occurences_dicho(int* n);

#endif //HUFFMAN_3_1_H
