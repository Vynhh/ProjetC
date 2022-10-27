//
// Created by truon on 27/10/2022.
//
#include "fonction.h"
t_tree createEmptyTree(){
    t_tree t;
    t.root = NULL;
    return t;
}

int numberline(FILE * file){
    int count = 0;
    int countfinal;
    char f;
    f = fgetc(file);
    while(f != EOF )
    {
        f = fgetc(file);
        if(f == '\n'){
            count++;
        }
    }
    return count;
}