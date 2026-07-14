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
        (*pl)->dato.importoTotale = 25 + (0.16643 * r.consumo);
    }
    else
    {
        Dato d;
        strcpy(d.cf, r.cf);
        d.consumoTotale = r.consumo;
        d.importoTotale = 25 + (0.16643 * r.consumo);
        insTesta(pl, d);
    }
}

void aggiornaTotale(ListaT *plt, Record r)
{ // Ricerca della posizione corretta per mantenere l'ordine cronologico
    while (*plt != NULL && ((*plt)->dato.anno < r.anno || ((*plt)->dato.anno == r.anno && (*plt)->dato.mese < r.mese)))
    {
        plt = &(*plt)->next;
    }
    // Se troviamo il mese/anno esatto, aggiorniamo il consumo
    if (*plt != NULL && (*plt)->dato.anno == r.anno && (*plt)->dato.mese == r.mese)
    {
        (*plt)->dato.consumiTotali += r.consumo;
    } // Altrimenti, inseriamo un nuovo nodo nella posizione identificata
    else
    {
        NodoT *aux = (NodoT *)malloc(sizeof(NodoT));
        if (aux != NULL)
        {
            aux->dato.mese = r.mese;
            aux->dato.anno = r.anno;
            aux->dato.consumiTotali = r.consumo;
            aux->next = *plt;
            *plt = aux;
        }
    }
}

void stampa(Lista l)
{
    while (l != NULL)
    {
        printf("%s %.3f %.2f\n", l->dato.cf, l->dato.consumoTotale, l->dato.importoTotale);
        l = l->next;
    }
}

void stampaTotale(ListaT lt)
{
    printf("Riepilogo consumi totali di tutti i clienti:\n");
    while (lt != NULL)
    {
        printf("%d %d %.3f\n", lt->dato.mese, lt->dato.anno, lt->dato.consumiTotali);
        lt = lt->next;
    }
}