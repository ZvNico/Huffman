/*****************************************************************//**
 * \file   conversion.h
 * \brief  header allowing to obtain the text file in binary (8bit)
 * 
 * \author josephxu joseph.xu@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_1_H
#define HUFFMAN_1_H
/**

 * \brief Function that converts a number/number into 8-bit binary.
 * \param int The integer to convert on 8 bits.
 * \return \c returns an array of 8 integers between 0 and 1.
 */
int *convert_ascii_8bit(int ascii);

/**
 * \brief Function that writes the received 8-bit array into the text file.
 */

void lecture_fichier();

#endif //HUFFMAN_1_H
