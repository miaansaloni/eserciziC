#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
    FILE *pf;
    Lista l;
    ListaT lt;
    Record r;

    if (argc != 2)
    {
        printf("Uso: %s file_binario\n", argv[0]);
        exit(1);
    }

    pf = fopen(argv[1], "rb");
    if (pf == NULL)
    {
        printf("Errore di apertura file %s\n", argv[1]);
        exit(2);
    }

    nuovaLista(&l);
    lt = NULL;

    while (fread(&r, sizeof(Record), 1, pf) == 1)
    {
        aggiorna(&l, r);
        aggiornaTotale(&lt, r);
    }
    fclose(pf);

    stampa(l);
    stampaTotale(lt);

    return 0;
}