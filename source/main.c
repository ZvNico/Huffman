#include <stdio.h>

#include "Occurrences/occurrences_naif.h
#include "Arbre de Huffman/Arbre de huffman naif.h"
#include "sdd/sdd.h"

int main() {
    char *nom_fichier;
    char decoder;
    FILE *fichier;

    do {
        printf("Rentrer le nom et l'extension du fichier que vous souhaitez compresser ( exemple : Alice.txt )\n");
        printf("(Q)uitter\n");
        scanf("%s", nom_fichier);
        if ((nom_fichier[0] != 'Q') && ((nom_fichier[1]) != '\0')) {
            fichier = fopen(nom_fichier, "r");
            if ( fichier != NULL) {
                fclose(fichier);
                Element *test = occurences(nom_fichier);
                Noeud *huffman = arbre_huffman(test);
                ecrire_dico(huffman);
                encodage(nom_fichier);
                printf("Le fichier %s a ete encode avec succes, souhaitez vous le decoder ?\n(O)ui\n(N)on\n",
                       nom_fichier);
                fflush(stdin);
                scanf("%c", &decoder);
                if (decoder == 'O') {
                    decodage(huffman);
                    printf("Le fichier %s a ete decode avec succes\n", nom_fichier);
                }
            } else {
                printf("Code d'erreur 300 : Aucune correspondance pour le fichier %s\nLe chemin, le nom ou l'extension du fichier saisis est incorrect\n",
                       nom_fichier);
            }
        }
        printf("\n");
    } while ((nom_fichier[0] != 'Q') && ((nom_fichier[1]) != '\0'));
    return 0;
}
