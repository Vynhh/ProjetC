#include "fonction.h"
#define LONG 40

int main() {
    // déclaration des variables
    t_tree adv, adj, nom, ver;
    char nature[LONG] = "";
    char racine[LONG] = "";
    char mot[LONG] = "";
    char NonDeter[LONG] = "";
    FILE *file;

    adv = createTree();
    adj = createTree();
    nom = createTree();
    ver = createTree();
    file = fopen("dictionnaire_non_accentu.txt","r");
    //file = fopen("dictionnaire_non_accentue.txt","r");

    if(file == NULL){
        printf("Le fichier n'existe pas");
        return 1;
    }

    // triage du dictionnaire
    while((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) {
        if (strcmp(nature, "Nom") == 0){
            Comparaison(nom.root, racine, 0, mot);
        }
        if (strcmp(nature, "Ver") == 0){
            Comparaison(ver.root, racine, 0, mot);
        }
        if (strcmp(nature, "Adj") == 0){
            Comparaison(adj.root, racine, 0, mot);
        }
        if (strcmp(nature, "Adv") == 0){
            Comparaison(adv.root, racine, 0, mot);
        }
    }
    // Affichage aleatoire



    fclose(file);
    return 0;
}
