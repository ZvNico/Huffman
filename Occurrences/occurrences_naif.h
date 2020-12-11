#ifndef HUFFMAN_2_1_H
#define HUFFMAN_2_1_H

#include "../../sdd.h"

void ajouter_element(Element **liste, char carac);

int incrementer_occurence(Element *, char);

Element *occurences(char *);

#endif //HUFFMAN_2_1_H
