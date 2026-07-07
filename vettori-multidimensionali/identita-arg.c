#include <stdio.h>
#include <stdlib.h>
#define DIM 100

void inizializza(int m[][DIM], int dl)
{
    int i, j;
    for (i = 0; i < dl; i++)
    {
        for (j = 0; j < dl; j++)
        {
            m[i][j] = i == j ? 1 : 0;
        }
    }
}

void stampa(int m[][DIM], int dl)
{
    int i, j;
    for (i = 0; i < dl; i++)
    {
        for (j = 0; j < dl; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int m[DIM][DIM];
    int i, j, dl;

    if (argc != 2)
    {
        printf("Uso: %s numero-righe-colonne\n", argv[0]);
        exit(3);
    }

    /*Quando si ricevono parametri tramite argv[] (che sono stringhe),
    sscanf può essere usata per convertire quegli argomenti in numeri*/
    if (sscanf(argv[1], "%d", &dl) != 1) // sscanf(stringa_sorgente, "formato", &variabile1);
    {
        printf("Largomento deve essere un intero positivo!\n");
        exit(2);
    }
    inizializza(m, dl);

    stampa(m, dl);

    return 0;
}