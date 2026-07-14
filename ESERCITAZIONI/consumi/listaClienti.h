typedef struct
{
    int mese;
    int anno;
    char cf[17];
    float consumo;
} Record;

typedef struct
{
    char cf[17];
    float consumoTotale;
    float importoTotale;
} Dato;

typedef struct
{
    int mese;
    int anno;
    float consumiTotali;
} DatoTotale;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef struct nodoT
{
    DatoTotale dato;
    struct nodoT *next;
} NodoT;

typedef Nodo *Lista;
typedef NodoT *ListaT;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
void aggiornaTotale(ListaT *plt, Record r);
void stampaTotale(ListaT lt);
