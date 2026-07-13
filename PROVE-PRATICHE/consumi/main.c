#include <stdio.h>
#include <stdlib.h>
#include "listaClienti.h"

int main(int argc, char *argv[])
{
    FILE *pfb;

    if (argc != 2)
    {
        printf("Uso: %s file_binario\n", argv[0]);
        exit(1);
    }

    pfb = fopen(argv[1], "rb");
    

    return 0;
}