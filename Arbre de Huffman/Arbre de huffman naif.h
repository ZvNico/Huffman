/*****************************************************************//**
 * \file   Arbre de huffman naif.h
 * \brief  Header which allows the creation of the huffman tree
 * 
 * \author josephxu joseph.xu@efrei.net
 * \date   December 2020
 *********************************************************************/
#ifndef HUFFMAN_2_2_H
#define HUFFMAN_2_2_H

/**
 * \brief Function that releases memory.
 * \param l a pointer to the Element. 
 */

void free_elements(Element* l);

/**
 * \brief function allows with a node list to return the node containing the lowest occurrence.
 * \param l a double pointer to the Element. 
 */
Noeud* pop_min(lNoeud** l);

/**
 * \brief Function that assembles the two smallest nodes.
 * \param n1 a pointer to the Noeud, with the lowest occurrence. 
 * \param n2 a pointer to the Noeud, with the lowest occurrence. 
 * \return, Returns a node that corresponds to the sum of the occurrences of the two nodes.
 */
Noeud* assemblage_noeuds(Noeud* n1, Noeud* n2);

/**
 * \brief Function that creates a node.
 * \param c, the character to put in the node.
 * \param n, the occurrence to be put in the node.
 * \return, returns the node with the character and occurrence.
 */
Noeud* creer_noeud(int n, char c);

/**
 * \brief Function that sends the node to a node list.
 * \param ln, a double pointer to the lNoeud.
 * \param c, the character to put in the node.
 * \param n, the occurrence to be put in the node.

 */
void push(lNoeud** ln, int n, char c);

/**
 * \brief Function that sends the node to a node list.
 * \param ln, a double pointer to the lNoeud.
 * \param noeud, a pointer to the Noeud.

 */
void push_noeud(lNoeud** ln, Noeud* noeud);

/**
 * \brief Function that manufactures the node list from l (Element).
 * \param l, a pointer to the Element .
 * \return the node list.
 */
lNoeud* lnoeud_from_elements(Element* l);

/**
 * \brief Function that returns the huffman tree .
 * \param l, a pointer to the Element. 
 * \return, returns the Huffman tree.
 */
Noeud* arbre_huffman(Element* l);
/**
 * \brief Function that displays the huffman tree.
 * \param huff, a pointer to the Noeud.
 */
void affichage_huffman(Noeud* huff);

#endif //HUFFMAN_2_2_H
