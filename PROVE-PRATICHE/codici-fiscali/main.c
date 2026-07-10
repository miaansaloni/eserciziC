#include <stdio.h>
#include <stdlib.h>
#include "listaUtenti.h"

int main(int argc, char *argv[])
{
    FILE *pft;
    FILE *pfb;
    Lista listaUtenti;
    CodiceFiscale cf;
    int attivita;

    if (argc != 3)
    {
        printf("Uso: %s file_binario file:testo\n", argv[0]);
        exit(1);
    }

    pfb = fopen(argv[1], "rb");
    if (pfb == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    creaLista(&listaUtenti); // crea una lista vuota

    // fread legge blocchi di 17 byte (un cf), il record binario è a lunghezza fissa quindi non serve un
    // formato testuale; si leggono byte grezzi
    while (fread(cf, 17, 1, pfb) == 1)
    {
        creaUtente(&listaUtenti, cf); // associa cf
    }
    fclose(pfb);

    pft = fopen(argv[2], "rt");
    if (pft == NULL)
    {
        printf("Errore apertura file %s\n", argv[2]);
        exit(3);
    }

    // legge una stringa e un intero riga per riga finché ci sono entrambi i campi
    while (fscanf(pft, "%s%d", cf, &attivita) == 2)
    {
        aggiorna(&listaUtenti, cf, attivita);
    }

    stampa(listaUtenti);

    return 0;
}