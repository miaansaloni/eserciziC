typedef struct{
    char numero[11];
    char piano;
    float credito;
}Utente;

typedef struct nodo{
    Utente dato;
    struct nodo *next;
}Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insTesta(Lista *pl, Utente u);
void aggiornaCredito(Lista, char numero[], int secondi);
void stampa(Lista l);