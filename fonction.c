//
// Created by robin on 08/11/2022.
//
#include "fonction.h"
t_tree createTree(){
    t_tree t;
    t.root = createNode('0', 0, -1, "");
    return t;
}

void Comparaison(p_node t, char *racine, int recursive, char *mot){
    int log = LongMot(racine);
    if (racine[recursive] == 'a'){
        if (t->a == NULL) {
            t->a = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->a, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->a->mot == 1)){
                t->a->lmot = creerMaillonFin(t->a->lmot, mot);
                t->a->variante = t->a->variante + 1;
            }
            Comparaison(t->a, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'b'){
        if (t->b == NULL) {
            t->b = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->b, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->b->mot == 1)){
                t->b->lmot = creerMaillonFin(t->b->lmot, mot);
                t->b->variante = t->b->variante + 1;
            }
            Comparaison(t->b, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'c'){
        if (t->c == NULL) {
            t->c = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->c, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->c->mot == 1)){
                t->c->lmot = creerMaillonFin(t->c->lmot, mot);
                t->c->variante = t->c->variante + 1;
            }
            Comparaison(t->c, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'd'){
        if (t->d == NULL) {
            t->d = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->d, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->d->mot == 1)){
                t->d->lmot = creerMaillonFin(t->d->lmot, mot);
                t->d->variante = t->d->variante + 1;
            }
            Comparaison(t->d, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'e'){
        if (t->e == NULL) {
            t->e = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->e, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->e->mot == 1)){
                t->e->lmot = creerMaillonFin(t->e->lmot, mot);
                t->e->variante = t->e->variante + 1;
            }
            Comparaison(t->e, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'f'){
        if (t->f == NULL) {
            t->f = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->f, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->f->mot == 1)){
                t->f->lmot = creerMaillonFin(t->f->lmot, mot);
                t->f->variante = t->f->variante + 1;
            }
            Comparaison(t->f, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'g'){
        if (t->g == NULL) {
            t->g = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->g, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->g->mot == 1)){
                t->g->lmot = creerMaillonFin(t->g->lmot, mot);
                t->g->variante = t->g->variante + 1;
            }
            Comparaison(t->g, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'h'){
        if (t->h == NULL) {
            t->h = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->h, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->h->mot == 1)){
                t->h->lmot = creerMaillonFin(t->h->lmot, mot);
                t->h->variante = t->h->variante + 1;
            }
            Comparaison(t->h, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'i'){
        if (t->i == NULL) {
            t->i = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->i, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->i->mot == 1)){
                t->i->lmot = creerMaillonFin(t->i->lmot, mot);
                t->i->variante = t->i->variante + 1;
            }
            Comparaison(t->i, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'j'){
        if (t->j == NULL) {
            t->j = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->j, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->j->mot == 1)){
                t->j->lmot = creerMaillonFin(t->j->lmot, mot);
                t->j->variante = t->j->variante + 1;
            }
            Comparaison(t->j, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'k'){
        if (t->k == NULL) {
            t->k = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->k, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->k->mot == 1)){
                t->k->lmot = creerMaillonFin(t->k->lmot, mot);
                t->k->variante = t->k->variante + 1;
            }
            Comparaison(t->k, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'l'){
        if (t->l == NULL) {
            t->l = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->l, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->l->mot == 1)){
                t->l->lmot = creerMaillonFin(t->l->lmot, mot);
                t->l->variante = t->l->variante + 1;
            }
            Comparaison(t->l, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'm'){
        if (t->m == NULL) {
            t->m = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->m, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->m->mot == 1)){
                t->m->lmot = creerMaillonFin(t->m->lmot, mot);
                t->m->variante = t->m->variante + 1;
            }
            Comparaison(t->m, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'n'){
        if (t->n == NULL) {
            t->n = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->n, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->n->mot == 1)){
                t->n->lmot = creerMaillonFin(t->n->lmot, mot);
                t->n->variante = t->n->variante + 1;
            }
            Comparaison(t->n, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'o'){
        if (t->o == NULL) {
            t->o = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->o, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->o->mot == 1)){
                t->o->lmot = creerMaillonFin(t->o->lmot, mot);
                t->o->variante = t->o->variante + 1;
            }
            Comparaison(t->o, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'p'){
        if (t->p == NULL) {
            t->p = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->p, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->p->mot == 1)){
                t->p->lmot = creerMaillonFin(t->p->lmot, mot);
                t->p->variante = t->p->variante + 1;
            }
            Comparaison(t->p, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'q'){
        if (t->q == NULL) {
            t->q = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->q, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->q->mot == 1)){
                t->q->lmot = creerMaillonFin(t->q->lmot, mot);
                t->q->variante = t->q->variante + 1;
            }
            Comparaison(t->q, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'r'){
        if (t->r == NULL) {
            t->r = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->r, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->r->mot == 1)){
                t->r->lmot = creerMaillonFin(t->r->lmot, mot);
                t->r->variante = t->r->variante + 1;
            }
            Comparaison(t->r, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 's'){
        if (t->s == NULL) {
            t->s = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->s, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->s->mot == 1)){
                t->s->lmot = creerMaillonFin(t->s->lmot, mot);
                t->s->variante = t->s->variante + 1;
            }
            Comparaison(t->s, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 't'){
        if (t->t == NULL) {
            t->t = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->t, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->t->mot == 1)){
                t->t->lmot = creerMaillonFin(t->t->lmot, mot);
                t->t->variante = t->t->variante + 1;
            }
            Comparaison(t->t, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'u'){
        if (t->u == NULL) {
            t->u = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->u, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->u->mot == 1)){
                t->u->lmot = creerMaillonFin(t->u->lmot, mot);
                t->u->variante = t->u->variante + 1;
            }
            Comparaison(t->u, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'v'){
        if (t->v == NULL) {
            t->v = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->v, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->v->mot == 1)){
                t->v->lmot = creerMaillonFin(t->v->lmot, mot);
                t->v->variante = t->v->variante + 1;
            }
            Comparaison(t->v, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'w'){
        if (t->w == NULL) {
            t->w = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->w, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->w->mot == 1)){
                t->w->lmot = creerMaillonFin(t->w->lmot, mot);
                t->w->variante = t->w->variante + 1;
            }
            Comparaison(t->w, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'x'){
        if (t->x == NULL) {
            t->x = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->x, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->x->mot == 1)){
                t->x->lmot = creerMaillonFin(t->x->lmot, mot);
                t->x->variante = t->x->variante + 1;
            }
            Comparaison(t->x, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'y'){
        if (t->y == NULL) {
            t->y = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->y, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->y->mot == 1)){
                t->y->lmot = creerMaillonFin(t->y->lmot, mot);
                t->y->variante = t->y->variante + 1;
            }
            Comparaison(t->y, racine, recursive+1, mot);
        }
    }
    else if (racine[recursive] == 'z'){
        if (t->z == NULL) {
            t->z = createNode(racine[recursive], recursive, log, mot);
            Comparaison(t->z, racine, recursive+1, mot);
        }
        else{
            if ((recursive == log-1) && (t->z->mot == 1)){
                t->z->lmot = creerMaillonFin(t->z->lmot, mot);
                t->z->variante = t->z->variante + 1;
            }
            Comparaison(t->z, racine, recursive+1, mot);
        }
    }
    else{
        return;
    }
}

int LongMot(char *racine){
    int longueur = 0, i = 0;
    while (racine[i] != '\0'){
        longueur++;
        i++;
    }
    return longueur;
}

void displayTree(p_node t){
    if(t == NULL){
        printf("NULL\n");
        return;
    }
    if (t->value != '0') {
        printf("%d ", t->profondeur);
    }
    if(t->a != NULL){
        displayTree(t->a);
    }
    if(t->b != NULL){
        displayTree(t->b);
    }
    if(t->c != NULL){
        displayTree(t->c);
    }
    if(t->d != NULL){
        displayTree(t->d);
    }
    if(t->e != NULL){
        displayTree(t->e);
    }
    if(t->f != NULL){
        displayTree(t->f);
    }
    if(t->g != NULL){
        displayTree(t->g);
    }
    if(t->h != NULL){
        displayTree(t->h);
    }
    if(t->i != NULL){
        displayTree(t->i);
    }
    if(t->j != NULL){
        displayTree(t->j);
    }
    if(t->k != NULL){
        displayTree(t->k);
    }
    if(t->l != NULL){
        displayTree(t->l);
    }
    if(t->m != NULL){
        displayTree(t->m);
    }
    if(t->n != NULL){
        displayTree(t->n);
    }
    if(t->o != NULL){
        displayTree(t->o);
    }
    if(t->p != NULL){
        displayTree(t->p);
    }
    if(t->q != NULL){
        displayTree(t->q);
    }
    if(t->r != NULL){
        displayTree(t->r);
    }
    if(t->s != NULL){
        displayTree(t->s);
    }
    if(t->t != NULL){
        displayTree(t->t);
    }
    if(t->u != NULL){
        displayTree(t->u);
    }
    if(t->v != NULL){
        displayTree(t->v);
    }
    if(t->w != NULL){
        displayTree(t->w);
    }
    if(t->x != NULL){
        displayTree(t->x);
    }
    if(t->y != NULL){
        displayTree(t->y);
    }
    if(t->z != NULL){
        displayTree(t->z);
    }
}