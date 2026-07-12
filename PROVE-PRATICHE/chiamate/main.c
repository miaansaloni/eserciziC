#include <stdio.h>
#include <stdlib.h>
#include "listaUtenti.h"

int main(int argc, char *argv[])
{
    FILE *pfb;
    FILE *pft;
    Lista l;
    Utente u;
    char numero[11];
    int secondi;

    // controllo correttezza linea di comando
    if (argc != 3)
    {
        printf("Uso: %s utenti.dat chiamate.txt\n", argv[0]);
        exit(1);
    }
    // creazione nuova lista
    nuovaLista(&l);

    // apertura in lettura del file binario
    pfb = fopen(argv[1], "rb");
    if (pfb == NULL)
    {
        printf("Errore apertura file %s\n", argv[1]);
        exit(2);
    }

    // iterazione sugli elementi del file binario e inserimento in testa alla nuova lista
    while (fread(&u, sizeof(Utente), 1, pfb) == 1)
    {
        insTesta(&l, u);
    }
    fclose(pfb); // chiusura

    // apertura in lettura del file di testo
    pft = fopen(argv[2], "rb");
    if (pft == NULL)
    {
        printf("Errore apertura file %s\n", argv[2]);
        exit(2);
    }

    while (fscanf(pft, "%s%d", numero, &secondi) == 2)
    {
        aggiornaCredito(l, numero, secondi);
    }
    fclose(pft);

    stampa(l);

    return 0;
}