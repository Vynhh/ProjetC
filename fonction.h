//
// Created by truon on 27/10/2022.
//
#include <stdio.h>
#include "nodes.h"
#ifndef PROJETDICTIONNAIRE_FONCTION_H
#define PROJETDICTIONNAIRE_FONCTION_H
typedef struct s_tree
{
    p_node root;
} t_tree, *p_tree;
t_tree createEmptyTree();
#endif //PROJETDICTIONNAIRE_FONCTION_H
