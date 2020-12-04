#include <stdio.h>
#include <stdlib.h>

void decodage(Node* Huffman)
{
    FILE * fichier=fopen("Output.txt", "a+");
    char test;
    Node * temp=Huffman;
    do
    {
        test=fgetc(fichier);
        if (temp->left==NULL && temp->right==NULL)
        {
            fprintf(fichier, "%c", temp->carac);
            temp=Huffman;
        }
        else if (test == '1')
        {
            temp=temp->right;
        }
        else if (test =='0')
            temp=temp->left;

    }while( test != EOF );
}
