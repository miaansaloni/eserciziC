#include <stdio.h>

struct orario
{
    int ora;
    int minuti;
};

int main(void){
    struct orario inizio, fine, diff;

    printf("Inserisci i due orari:\n");

    scanf("%d %d", &inizio.ora, &inizio.minuti);
    scanf("%d %d", &fine.ora, &fine.minuti);

    //conversione ore in minuti
    int inizio_minuti = inizio.ora *60 + inizio.minuti;
    int fine_minuti = fine.ora * 60 + fine.minuti;
    int diff_minuti = fine_minuti - inizio_minuti;

    //riempimento dei campi della struttura
    diff.ora = diff_minuti / 60;
    diff.minuti = diff_minuti % 60;

    printf("differenza: %d:%d\n", diff.ora, diff.minuti);
    

    return 0;
}