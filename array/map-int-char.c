#include <stdio.h>
#define DIM 5

int main(void){
    int i, a[]={2,4,1,6,2};
    char b[5];

    for(i=0; i<DIM; i++){
        b[i]='0'+a[i]; //carattere '0'=48 nel codice ASCII
    }                  //la macchina astratta promuove il carattere a intero e somma il valore di a[i]
                       //il risultato viene assegnato a b[i], es la prima cella 48+2=50
                       //il valore 50 è il codice ascii del carattere '2'

    for(i=0; i<DIM; i++){
        printf("%c ", b[i]); //2 4 1 6 2
        printf("%d ", b[i]); //50 52 49 54 50
    }
    return 0;
}