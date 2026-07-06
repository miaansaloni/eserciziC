#include <stdio.h>
#include <stdlib.h>
#include "dipendente.h"
#define DIM 100

int main(int argc, char *argv[])
{
    Dipendente dipendenti[DIM];
    int dl, i;

    FILE *pf;

    if (argc != 2)
    {
        printf("Uso: %s nome_file\n", argv[0]);
        exit(3);
    }

    if ((pf = fopen(argv[1], "rb")) == NULL)
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