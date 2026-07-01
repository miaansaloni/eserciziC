#include <stdio.h>

/*Detta m la rappresentazione come intero decimale del proprio numero di matricola, la funzione di prototipo int f(int d)
restituisce la d-esima cifra di m a partire da sinistra se d è compreso fra 1 e il numero di cifre di m; 0 altrimenti.
Per esempio, se il numero di matricola è 654321, la chiamata f(2) restituisce 5, mentre le chiamate f(0) e f(7)
restituiscono 0.
Quali caratteri stampa il programma costituito dal codice a fianco e dalla definizione della funzione f? Motivare la risposta.*/

int f(int d){
    int matricola[]={2, 1, 6, 3, 9, 3};
    int nCifre=6;
    if(d>=1 && d<=nCifre){
        return matricola[d-1];
    }
    return 0;
}

int main(){
    int a=0, i[]={1, 1, 1};

    while(a<2){
        i[a]=f(++a);
    }

    for(i[0]=2; i[0]>=0; i[0]--){
        printf("%d ", i[i[0]]);
    }

    printf("\n");

    return 0;
}
