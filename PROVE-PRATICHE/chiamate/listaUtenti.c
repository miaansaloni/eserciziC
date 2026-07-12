#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaUtenti.h"

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Utente u)
{
    Nodo *aux = malloc(sizeof(Nodo));
    aux->dato = u;
    aux->next = *pl;
    *pl = aux;
}

float costoChiamata(char piano, int secondi)
{
    switch (piano)
    {
    case 'A':
        return 0.15 + 0.08 * (1 + secondi / 60);

    case 'B':
        return 0.12 / 60 * secondi;
    }
}

void aggiornaCredito(Lista l, char numero[], int secondi)
{
    while (l != NULL && strcmp(l->dato.numero, numero) != 0)
    {
        l = l->next;
    }
    if (l == NULL)
    {
        printf("Numero %s non trovato\n", l->dato.numero);
        exit(4);
    }
    l->dato.credito = l->dato.credito - costoChiamata(l->dato.piano, secondi);
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%c %.2f\n", l->dato.numero, l->dato.credito);
        l = l->next;
    }
}