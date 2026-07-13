#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
    FILE *pfb;
    Lista l;
    Dato d;

    if (argc != 2)
    {
        printf("Uso: %s file_binario\n", argv[0]);
        exit(1);
    }

    pfb = fopen(argv[1], "rb");
    if (pfb == NULL)
    {
        printf("Errore aperturafile %s\n", argv[1]);
    }

    nuovaLista(&l);
    while (fread(&d, sizeof(Dato), 1, pfb) == 1)
    {
        insTesta(&l, d);
    }
    fclose(pfb);

    return 0;
}