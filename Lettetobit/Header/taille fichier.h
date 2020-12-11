/*****************************************************************//**
 * \file   taille fichier.h
 * \brief  header allowing to read a text file and retrieve the size of that file
 * 
 * \author josephxu joseph.xu@efrei.net
 * \date   December 2020
 *********************************************************************/

#ifndef HUFFMAN_1_H
#define HUFFMAN_1_H

/**
 * \brief Function that returns the size of the file so the number of characters.
 * \param a pointer to the char with the name of the file where we will calculate the size.
 * \return an int which is the number of characters in the text file.
 */
int taille_fichier(char *nom);

#endif //HUFFMAN_1_H
