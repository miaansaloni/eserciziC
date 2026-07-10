#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaUtenti.h"

void creaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = malloc(sizeof(Nodo)); // alloca nuovo nodo sull'heap
    if (aux == NULL)
    {
        exit(100);
    }
    aux->dato = d;   // ci copia il dato passato
    aux->next = *pl; // il nuovo nodo punta alla vecchia testa
    *pl = aux;       // la lista punta al nuovo nodo
}

// costruisce il Dato per un nuovo utente
void creaUtente(Lista *pl, CodiceFiscale cf)
{
    Dato d;
    strcpy(d.cf, cf); // copia la stringa (array non si assegna con =)
    d.attivita[0] = 4;
    d.attivita[1] = 4;
    d.attivita[2] = 4; // ingressi residui inizializzati a 4 per ogni attività
    insTesta(pl, d);   // inserisce l'utente nella lista
}

void aggiorna(Lista *pl, CodiceFiscale cf, int attivita)
{
    while (*pl != NULL && strcmp((*pl)->dato.cf, cf) != 0)
    {
        pl = &(*pl)->next;
    }
    if (*pl != NULL && strcmp((*pl)->dato.cf, cf) == 0)
    {
        if ((*pl)->dato.attivita[attivita - 1] < 1)
        {
            printf("Codice Fiscale %s, attività %d: accesso negato\n", (*pl)->dato.cf, attivita);
        }
        else
        {
            (*pl)->dato.attivita[attivita - 1]--;
        }
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("Ingressi rimanenti per %s: %d %d %d\n", l->dato.cf, l->dato.attivita[0], l->dato.attivita[1], l->dato.attivita[2]);
        l = l->next;
    }
}