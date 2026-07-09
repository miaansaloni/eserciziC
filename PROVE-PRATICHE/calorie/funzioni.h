
// struttura alimento
typedef struct
{
    char nome[31];
    float calorie;
} Alimento;

// struttura nodo per la lista collegata
typedef struct nodo
{
    Alimento dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void carica(Lista *pl, char nomeFile[]);
float cerca(Lista l, char nomeAlimento[]);
void libera(Lista *pl);