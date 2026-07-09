#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

int main(int argc, char *argv[])
{
    FILE *fpasto;
    Lista l;

    // verifica della correttezza della linea di comando
    if (argc != 3)
    {
        printf("Uso: %s calorie.dat pasto.txt\n", argv[0]);
        exit(3);
    }

    carica(&l, argv[1]); // carico il db degli elementi da argv[1] in una lista collegata

    if ((fpasto = fopen(argv[2], "rt")) == NULL)
    {
        printf("Errore apertura file pasto\n");
        libera(&l);
        exit(1);
    }

    char nomeAlimento[31];
    float grammi, calorie, totCalorie = 0.0f;

    while (fscanf(fpasto, "%s %f", nomeAlimento, &grammi) == 2)
    {
        calorie = cerca(l, nomeAlimento);
        if (calorie < 0)
        {
            printf("Errore, l'alimento '%s' non è presente nel database\n", nomeAlimento);
            fclose(fpasto);
            libera(&l);
            exit(2);
        }
        totCalorie = totCalorie + (grammi * calorie) / 100.0;
    }

    printf("Calorie totali del pasto: %.2f\n", totCalorie);

    fclose(fpasto);
    libera(&l);

    return 0;
}