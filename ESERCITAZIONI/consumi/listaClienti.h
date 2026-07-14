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
    float imprtoTotale;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
