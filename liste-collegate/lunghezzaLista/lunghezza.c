#include <stdio.h>
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

int main()
{
    Lista l;
    listaNonOrdinata(&l, 7);
    stampa(l);
    printf("Lunghezza lista: %d\n", lunghezza(l));
    return 0;
}