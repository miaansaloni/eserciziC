#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
    FILE *pfb;
    Lista l;
    Record r;

    if (argc != 2)
    {
        printf("Uso: %s file-binario\n", argv[0]);
        exit(1);
    }

    nuovaLista(&l);

    pfb = fopen(argv[1], "rb");
    if (pfb == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    while (fread(&r, sizeof(Record), 1, pfb) == 1)
    {
        aggiorna(&l, r);
    }
    fclose(pfb);

    return 0;
}