#include <stdio.h>
#include <stdlib.h>
#include "tipi.h"
#include "generatoreListe.h"

int lunghezza(Lista l)
{
    int c = 0;
    while (l != NULL)
    {
        c++;
        l = l->next;
    }
    return c;
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}

int *listToArray(Lista l)
{
    int dim = lunghezza(l);
    int *pi = (int *)malloc(dim * sizeof(int));
    int i = 0;
    while (l != NULL)
    {
        pi[i] = l->dato;
        i++;
        l = l->next;
    }
    return pi;
}

int main()
{
    Lista l;
    int *pi;
    int dl, i;
    listaNonOrdinata(&l, 5);
    stampa(l);
    dl = lunghezza(l);
    pi = listToArray(l);

    for (i = 0; i < dl; i++)
    {
        printf("%d ", pi[i]);
    }
    printf("\n");
    return 0;
}