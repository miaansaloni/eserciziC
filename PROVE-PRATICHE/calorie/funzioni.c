#include "funzioni.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Carica i dati dal file binario e li inserisce in una lista collegata
void carica(Lista *pl, char nomeFile[])
{
    FILE *f;
    Alimento a;
    Nodo *aux;

    if ((f = fopen(nomeFile, "rb")) == NULL) // aprertura del file binario in lettura
    {
        printf("Errore, impossibile aprire il file binario %s\n", nomeFile);
        exit(1);
    }

    // inizializzazione lista vuota
    *pl = NULL;

    while (fread(&a, sizeof(Alimento), 1, f) == 1) // iterazione sul file binario, leggo un record alla volta
    {
        // pattern inserimento in testa
        aux = (Nodo *)malloc(sizeof(Nodo));
        if (aux == NULL)
        {
            exit(100); // allocazione non riuscita
        }
        aux->dato = a;   // copia del record letto nel nodo
        aux->next = *pl; // il nuovo nodo punta alla vecchia testa
        *pl = aux;       // la testa della lista diventa il nuovo nodo
    }
}

// ricerca di un alimento nella lista
float cerca(Lista l, char nomeAlimento[])
{
    while (l != NULL)
    {
        if (strcmp(l->dato.nome, nomeAlimento) == 0)
        {
            return l->dato.calorie; // alimento trovato
        }
        l = l->next; // avanzamento al nodo successivo
    }
    return -1; // alimento non trovato
}

// libera la memoria occupata dalla lista collegata
void libera(Lista *pl)
{
    Nodo *aux;
    while (*pl != NULL)
    {
        aux = *pl;         // salva il nodo corrente
        *pl = (*pl)->next; // avanza la testa al nodo successivo
        free(aux);         // libera il nodo salvato
    }
}