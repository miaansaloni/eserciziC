#include <stdio.h>
#include "tipi.h"
#include "generatoreListe.h"

void stampa(Lista l)
{
    while (l != NULL) // finchè l non è vuota
    {
        printf("%d ", l->dato); // stampa la testa di l
        l = l->next;            // assegna a l la sua coda
    }
    printf("\n");
}

void azzera(Lista l)
{
    while (l != NULL) // finchè l non è vuota
    {
        l->dato = 0; // azzera la testa di l
        l = l->next; // assegna ad l la sua coda
    }
}

// main()
int main()
{
    Lista l;

    listaNonOrdinata(&l, 6);
    stampa(l);
    azzera(l);
    stampa(l);
    return 0;
}