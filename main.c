#include "fonction.h"
#define LONG 40
#include "time.h"

int main() {
    // dÃ©claration des variables
    t_tree adv, adj, nom, ver;
    int ficL = 0, rdm, rdm1, rdm2, rdm3, i = 0;
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
    srand(time(NULL));

    rdm = rand() % ficL + 1;
    rewind(file);
    i = 0;
    while(((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) && (i != rdm)){
        i = i+1;
        if ((strcmp(nature, "Nom") == 0) && (i == rdm)){
            printf("un %s ", mot);

        }
        else if((strcmp(nature, "Nom") != 0) && (i == rdm)){
            rewind(file);
            i = 0;
            rdm = rand() % ficL + 1;
        }
    }


    rewind(file);
    i = 0;
    rdm3 = rand() % ficL + 1;
    while(((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) && (i != rdm3)){
        i = i+1;
        if ((strcmp(nature, "Adj") == 0) && (i == rdm3)){
            printf("%s ", mot);
        }
        else if((strcmp(nature, "Adj") != 0) && (i == rdm3)){
            rewind(file);
            i = 0;
            rdm3 = rand() % ficL + 1;
        }
    }


    rewind(file);
    i = 0;
    rdm1 = rand() % ficL + 1;
    while(((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) && (i != rdm1)){
        i = i+1;
        if ((strcmp(nature, "Ver") == 0) && (i == rdm1)){
            printf("%s ", racine);
        }
        else if((strcmp(nature, "Ver") != 0) && (i == rdm1)){
            rewind(file);
            i = 0;
            rdm1 = rand() % ficL + 1;
        }
    }


    rewind(file);
    i = 0;
    rdm2 = rand() % ficL + 1;
    while(((fscanf(file, "%s\t%s\t%s :%s\n", mot, racine, nature, NonDeter)) != EOF) && (i != rdm2)){
        i = i+1;
        if ((strcmp(nature, "Nom") == 0) && (i == rdm2)){
            printf("un %s ", mot);
        }
        else if((strcmp(nature, "Nom") != 0) && (i == rdm2)){
            rewind(file);
            i = 0;
            rdm2 = rand() % ficL + 1;
        }
    }


    fclose(file);
    return 0;
}