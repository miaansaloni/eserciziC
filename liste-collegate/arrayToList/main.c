#include <stdio.h>
#include <stdlib.h>

typedef int Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux = malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        printf("Errore allocazione memoria\n");
        exit(100);
    }
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
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

Lista arrayToList(int a[], int dl)
{
    Lista l = NULL;
    int i;
    for (i = dl - 1; i >= 0; i--)
    {
        insTesta(&l, a[i]);
    }
    return l;
}

int main(void)
{
    int a[] = {2, 4, 0, 3, 5};
    Lista l;
    l = arrayToList(a, 5);
    stampa(l);

    return 0;
}