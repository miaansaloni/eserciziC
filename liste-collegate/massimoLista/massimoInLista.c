#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"
#include "generatoreListe.h"

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}

int massimo(Lista l)
{
    int m; // accumulatore

    if (l == NULL)
    {
        printf("impossibile calcolare il massimo di una lista vuota\n");
        exit(1);
    }

    m = l->dato;
    l = l->next;
    while (l != 0)
    {
        m = l->dato > m ? l->dato : m;
        l = l->next;
    }
    return m;
}

int main()
{
    Lista l;

    listaNonOrdinata(&l, 8);
    stampa(l);
    printf("Il massimo valore della lista data è %d\n", massimo(l));
    return 0;
}