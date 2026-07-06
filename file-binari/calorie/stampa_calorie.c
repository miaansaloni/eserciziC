#include <stdio.h>
#include <stdlib.h>
#define DIM 50

// record, una volta che ho questo ho tutto ciò che mi serve per leggere il file
typedef struct
{
    char nome[31];
    float calorie;
} Alimento;

int main(void)
{
    Alimento record[DIM];
    int dl, i;

    FILE *pf;

    if ((pf = fopen("calorie.dat", "rb")) == NULL)
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    dl = fread(record, sizeof(Alimento), DIM, pf);

    if (fclose(pf) != 0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }

    for (i = 0; i < dl; i++)
    {
        printf("%s %.2f\n", record[i].nome, record[i].calorie);
    }

    return 0;
}