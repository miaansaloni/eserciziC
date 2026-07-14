#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClienti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *pl, Record r)
{
    while (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) != 0)
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) == 0)
    {
        (*pl)->dato.consumoTotale += r.consumo;
        (*pl)->dato.imprtoTotale = 25 + (0.16643 * r.consumo);
    }
    else
    {
        Dato d;
        strcpy(d.cf, r.cf);
        d.consumoTotale = r.consumo;
        d.imprtoTotale = 25 + (0.16643 * r.consumo);
        insTesta(pl, d);
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%s %.3f %.2f\n", l->dato.cf, l->dato.consumoTotale, l->dato.imprtoTotale);
        l = l->next;
    }
}