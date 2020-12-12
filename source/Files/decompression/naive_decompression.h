/*****************************************************************//**
 * \file   5.h
 * \brief  header that decompresses a text file from a Huffman tree and creates a text file
 * 
 * \author josephxu joseph.xu@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_5_H_INCLUDED
#define HUFFMAN_5_H_INCLUDED

/**
 * \brief Function that scans the tree and writes in the text file corresponds to each binary suite.
 * \param a pointer to the arbre to browse and find the corresponding character.
 */

void decodage(Noeud *arbre);

/**
 * \brief Function that reads a binary suite and finds the character while browsing the tree.
 * \param a pointer to the Noeud to browse and find the corresponding character.
 * \param a pointer to a char that corresponds to the text.
 * \param a pointer on an integer that corresponds to the cursor.
 * \return, returns the character corresponding to the binary suite.
 */

char get_carac(Noeud *arbre, char *texte, int *curseur);

#endif // HUFFMAN_5_H_INCLUDED
