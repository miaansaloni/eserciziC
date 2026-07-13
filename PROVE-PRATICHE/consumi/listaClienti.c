#include "listaClienti.h"
#include <stdlib.h>>
#include <string.h>>

void nuovaLista(Lista *l) { *l = NULL; }

void insTesta(Lista *l, Dato d)
{
    Nodo *aux = malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *l;
    *l = aux;
}

void aggiorna(Lista *l, Record r)
{
}

void stampa(Lista l);