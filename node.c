//
// Created by robin on 27/10/2022.
//
#include "node.h"

liste creerMaillonFin(liste L, char *mot){
    maillon *nouveau = (maillon*) malloc(sizeof(maillon));
    strcpy(nouveau->mot, mot);
    nouveau->succ = NULL;
    if (L == NULL){
        L = nouveau;
    }
    else{
        maillon *tmp = L;
        while (tmp->succ != NULL){
            tmp = tmp->succ;
        }
        tmp->succ = nouveau;
    }
    return L;
}

p_node createNode(char val, int position, int longueur, char *mot)
{
    p_node nouv;
    nouv = (p_node)malloc(sizeof(t_node));
    nouv->value = val;
    nouv->a = nouv->b = nouv->c = nouv->d  = nouv->e  = nouv->f = nouv->g = nouv->h = nouv->i = nouv->j = nouv->k = nouv->l = nouv->m = nouv->n = nouv->o = nouv->p = nouv->q = nouv->r = nouv->s = nouv->t = nouv->u = nouv-> v = nouv->w = nouv->x = nouv->y = nouv->z = NULL;
    if (position == longueur-1){
        nouv->mot = 1;
        nouv->lmot = creerMaillonFin(nouv->lmot, mot);
        nouv->variante = 1;
    }
    else {
        nouv->mot = 0;
        nouv->lmot = NULL;
    }
    nouv->profondeur = position;
    return nouv;
}

void displayListe(liste L){
    maillon *tmp;
    if (L != NULL){
        tmp = L;
        while (tmp != NULL){
            printf("%s - ",tmp->mot);
            tmp = tmp->succ;
        }
    }
}