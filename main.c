#include "fonction.h"
#define LONG 40
#include "time.h"

int main() {
    // dÃ©claration des variables
    t_tree adv, adj, nom, ver;
    int ficL = 0, choix = 0, i = 0;
    char nature[LONG] = "";
    char racine[LONG] = "";
    char mot[LONG] = "";
    char NonDeter[LONG] = "";
    FILE *file;

    adv = createTree();
    adj = createTree();
    nom = createTree();
    ver = createTree();
    file = fopen("dico_10_lignes.txt","r");
    //file = fopen("dictionnaire_non_accentue.txt","r");

    if(file == NULL){
        printf("Le fichier n'existe pas");
        return 1;
    }

    // triage du dictionnaire
    while((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) {
        ficL = ficL + 1 ;
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

    // interaction avec l'utilisateur
    srand(time(NULL));
    while (choix < 1 || choix > 2) {
        printf("Quel modele voulez-vous afficher ? (1 ou 2) :");
        scanf("%d", &choix);
        if (choix == 1) {
            printf("Modele 1 : ");
            rdmNom(file, ficL);
            rdmAdj(file, ficL);
            rdmVer(file, ficL);
            rdmNom(file, ficL);
        }
        if (choix == 2) {
            printf("Modele 2 : ");
            rdmNom(file, ficL);
            printf("qui ");
            rdmVer(file, ficL);
            rdmVer(file, ficL);
            rdmNom(file, ficL);
            rdmAdj(file, ficL);
        }
    }
    fclose(file);
    return 0;
}