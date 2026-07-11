#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *pfb;
    FILE *pft;

    // controllo correttezza linea di comando
    if (argc != 3)
    {
        printf("Uso: %s utenti.dat chiamate.txt\n", argv[0]);
        exit(1);
    }

    // apertura in lettura del file binario
    pfb = fopen(argv[1], "rb");
    if (pfb == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    // apertura in lettura del file di testo
    pft = fopen(argv[2], "rb");
    if (pft == NULL)
    {
        printf("Errore apertura file %s\n", argv[2]);
        exit(2);
    }

    return 0;
}