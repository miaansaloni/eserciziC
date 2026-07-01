/*Detta m la rappresentazione come intero decimale del proprio numero di matricola, la funzione di prototipo int f(int d) restituisce
la d-esima cifra di m a partire da destra se d è compreso fra 1 e il numero di cifre di m; 0 altrimenti.
Per esempio, se il numero di matricola è 123456, la chiamata f(2) restituisce 5, mentre le chiamate f(0) e f(7) restituiscono 0.
Che cosa scrive il programma costituito dal codice alla slide 18 e dalla definizione della funzione f? Motivare la risposta.*/

#include <stdio.h>

int f(int d){
    //con divisione/modulo:
    int m = 123456; 
    int nCifre = 6; 
    int i;
    if (d < 1 || d > nCifre) {
        return 0;
    }
    for (i = 1; i < d; i++) {
        m /= 10;
    }
    return m % 10;

    //CON ARRAY (meglio per vederlo nel debugger)
    /*int cifre[] = {6, 5, 4, 3, 2, 1}; 
    int num_cifre = 6;

    if (d >= 1 && d <= num_cifre) {
        return cifre[d - 1];*/
}

int main(int argc, char* argv[]){
    char s[]="ABCDEFGHIJKLMNOPQRSTUVQXYZ";
    int i = 1;

    while(i<7){
        //cuore del programma
        printf("%c", *( (char*) ( (int*)s + i ) ) ); //equivale ad accedere all'elemento s[i*4]
        //
        i += f(i) ? f(i) : 1;
    }
    printf("\n");
}