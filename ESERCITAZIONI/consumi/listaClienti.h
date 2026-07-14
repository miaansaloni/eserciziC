
typedef struct // campi del file binario
{
    int mese;
    int anno;
    char cf[17];
    float consumo;
} Record;

typedef struct // elemeto cliente della lista
{
    char cf[17];
    float consumoTotale;
    float importoTotale;
} Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void insTesta(Lista *l, Dato d);
void stampa(Lista l);
void aggiorna(Lista *l, Record r);