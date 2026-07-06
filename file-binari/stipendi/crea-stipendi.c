// questo programma deve creare il file binario stipendi.dat
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dipendente.h"

int main() 
{
    // inizializzazione di un array di struct sia array che struct si inizializzano con le graffe
    Dipendente dipendenti[5] = {{"Rossi", 1750.0},
                                {"Bianchi", 1857.4},
                                {"Verdi", 2160.0},
                                {"Neri", 2000.0},
                                {"Esposito", 1950.0}};

    FILE *pf;

    if ((pf = fopen("stipendi.dat", "wb")) == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }

    fwrite(dipendenti, sizeof(Dipendente), 5, pf); // fa la copia byte per byte di un'area di memoria dentro un file

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    return 0;
}