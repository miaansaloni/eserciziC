#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf; //definisce la variabile puntatore file

    char s[] = "Ferrara";
    int d = 44122;

    pf = fopen("scritto.txt", "wt"); //aprirlo
    if(pf==NULL){
        printf("Errore apertura file\n");
        exit(1);
    }

    fprintf(pf, "%s\n", s);
    fprintf(pf, "%d\n", d);

    //è alla chiusura che verrà scritto effettivamente sul file
    if(fclose(pf)!=0){
        printf("Errore chiusura");
        exit(2);
    }
}