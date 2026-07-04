#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *pf;
    char parola[50];

    //apertura e controllo errore nella stessa istruzione
    if((pf = fopen("prova.txt", "w")) == NULL){
        printf("Errore apertura\n");
        exit(1);
    }

    do{
        scanf("%s", parola);
        fprintf(pf, "%s\n", parola);
    } while (strcmp(parola, "FINE") != 0); //strcmp restituisce 0 quando le stringhe sono uguali
    

    if(fclose(pf) != 0){
        printf("Errore chiusura\n");
        exit(2);
    }

    return 0;
}