//
// Created by robin on 08/11/2022.
//


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
#endif //PROJETDICTIONNAIRE_FONCTION_H
