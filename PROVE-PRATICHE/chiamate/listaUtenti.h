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
