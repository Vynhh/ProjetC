#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#ifndef PROJETDICTIONNAIRE_NODES_H
#define PROJETDICTIONNAIRE_NODES_H

typedef struct LLC
{
    char mot[30];
    struct LLC *succ;
}maillon, *liste;

typedef struct s_node
{
    char value;
    struct s_node   *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o, *p, *q, *r, *s, *t, *u, *v, *w, *x, *y, *z;
    int mot;
    int profondeur;
    liste lmot;
    int variante;
}t_node, *p_node;


liste creerMaillonFin(liste , char *);
p_node createNode(char, int, int, char *);
void displayListe(liste);

#endif //PROJETDICTIONNAIRE_NODES_H