#include <stdio.h>
#include <stdlib.h>//definisce la costante NULL e dichiara la funzione exit()

int main(){
    FILE *pf;
    int i = 12;
    int a[10]={3,4,7,8,9,10,-1,2,3,4}; //vogliamo scrivere in un file il contenuto di questo array

    if((pf= fopen("interi.dat", "wb"))==NULL){ //apro e controllo il file binario in modalità scrittura
        printf("Errore apertura file\n");
        exit(1);
    }

    // fwrite(&i, sizeof(int), 1, pf); // scrive un elemento 
    // fwrite(a, sizeof(int), 10, pf); // scrive tutti gli elementi dell'array a insieme
    
    // scrive tutti gli elementi di a uno ad uno
    for(i=0; i<10; i++){
        fwrite(&a[i], sizeof(int), 1, pf);
    }

    if (fclose(pf) != 0){
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;

}