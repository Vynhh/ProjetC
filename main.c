#include <stdio.h>
#include "stdlib.h"
#include "fonction.h"
#include "nodes.h"

int main() {
    p_node t;
    t_tree arbre;
    arbre = createEmptyTree();
    int a;
    FILE * file;
    file = fopen("dico_10_lignes.txt","r");
    if( file == NULL){
        printf("Le fichier n'existe pas");
        exit( -1);
    }
    fclose(file);
    return 0;
}