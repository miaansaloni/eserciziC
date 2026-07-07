#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p; // indirizzo all'area allocata
    int *a, i;
    int *b, j, n;

    // chiamo la malloc passando come parametro la dimensione di un intero
    // restituirà un indirizzo che segno in p, per poter avere accesso all'area di memoria
    //(int *) => cast, così la trasformo in un puntatore a int (standard è void)
    p = (int *)malloc(sizeof(int)); // allocazione dell'area di memoria
    *p = 4;                         // se p è l'indirizzo, così scrivo dentro l'area di memoria

    a = (int *)malloc(1000000 * sizeof(int)); // allocazione array di 1000000 di interi (avrà quindi dim. 4000000 byte)
    for (i = 0; i < 1000000; i++)             // con l'array ci faccio quello che voglio
    {
        a[i] = i;
    }

    // array di n elementi chiesti all'utente
    scanf("%d", &n);
    b = (int *)malloc(n * sizeof(int));
    for (j = 0; j < n; j++)
    {
        b[j] = j;
    }

    return 0;
}