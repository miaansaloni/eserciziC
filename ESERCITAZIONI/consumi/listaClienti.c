#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaClienti.h"

void nuovaLista(Lista *l) { *l = NULL; }

void insTesta(Lista *l, Dato d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        exit(100);
    }
    aux->dato = d;
    aux->next = *l;
    *l = aux;
}

void aggiorna(Lista *l, Record r)
{
}

void stampa(Lista l);