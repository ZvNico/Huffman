/*****************************************************************//**
 * \file   occurrences_naif.h
 * \brief  Header which allows to add the characters of a text file in a list, if it is already present then its occurrence increments
 * 
 * \author josephxu joseph.xu@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_2_1_H
#define HUFFMAN_2_1_H

#include "../sdd/sdd.h"

/**
 * \brief Function that adds the character to the list and if the list is null, the function returns the element.
 * \param double pointer to the liste to query.
 * \param a char The character to be added.
 */
void ajouter_element(Element **liste, char carac);


/**
 * \brief Function that lets you know whether the character is in the list or not, if it is in the list then its occurence increments.
 * \param a pointer to the liste to query.
 * \param a char the character being studied to determine whether or not it is already on the list.
 * \return \c 1, If the character is already in the list.
 * \return \c 0, If the character is not  in the list.
 */

int incrementer_occurence(Element *liste, char carac);


/**
 * \brief Function that adds file characters to a list.
 * \param a pointer on the text file.
 * \return, returns a list of type Element.
 */

Element *occurences(char *nom_fichier);

#endif //HUFFMAN_2_1_H
