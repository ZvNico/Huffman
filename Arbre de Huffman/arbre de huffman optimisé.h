/*****************************************************************//**
 * \file   arbre de huffman optimisé.h
 * \brief  this is the future header for the optimisation of the Huffman tree
 * 
 * \author Maxime LAZE : maxime.laze@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_2_H
#define HUFFMAN_2_H

#include "../../sdd.h"
/**
 * \brief adds an occurence to an array of nodes if the character has already been found, or adds the node of the character otherwise.
 * \param noeuds is a triple pointeur on Noeud.
 * \param n int corresponds to the size of the list.
 */
void tri_insertion(Noeud ***noeuds, int n);

///Noeud* arbre_huffman_opti(Noeud**, int);

#endif //HUFFMAN_2_H
