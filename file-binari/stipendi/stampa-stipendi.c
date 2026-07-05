// questo programma deve creare il file binario stipendi.dat
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DIM 100

typedef struct
{
    char nome[22];
    float stipendio;
} Dipendente;

int main()
{
    Dipendente dipendenti[DIM];
    int dl, i;

    FILE *pf;

    if ((pf = fopen("stipendi.dat", "rb")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }

    dl = fread(dipendenti, sizeof(Dipendente), DIM, pf);

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    for (i = 0; i < dl; i++)
    {
        printf("%s %.2f\n", dipendenti[i].nome, dipendenti[i].stipendio);
    }

    return 0;
}