#include "node.h"
#ifndef PROJETDICTIONNAIRE_FONCTION_H
#define PROJETDICTIONNAIRE_FONCTION_H
typedef struct s_tree
{
    p_node root;
} t_tree;

t_tree createTree();
void Comparaison(p_node, char *, int, char *);
int LongMot(char *);
void displayTree(p_node);
int numberline(FILE *file);
#endif //PROJETDICTIONNAIRE_FONCTION_H