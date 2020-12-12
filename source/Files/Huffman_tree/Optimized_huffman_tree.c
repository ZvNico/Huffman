#include <stdio.h>
#include <stdlib.h>
#include "../sdd/sdd.h"

void tri_insertion(Noeud ***noeuds, int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        Noeud *elem = (*noeuds)[i];
        for (j = i; j > 0 && (*noeuds)[j - 1]->occur > elem->occur; j--)
            (*noeuds)[j] = (*noeuds)[j - 1];
        (*noeuds)[j] = elem;
    }
}

