//
// Created by truon on 27/10/2022.
//
#include <stdio.h>
#ifndef PROJETDICTIONNAIRE_NODES_H
#define PROJETDICTIONNAIRE_NODES_H
#include <stdarg.h>
struct s_node
{
    int value;
    struct s_node   *left, *right;
    int depth;
};

typedef struct s_node t_node, *p_node;
p_node createNode(int val);
#endif //PROJETDICTIONNAIRE_NODES_H
