typedef char CodiceFiscale[17];

// contenuto di ogni nodo della lista
typedef struct
{
    CodiceFiscale cf; // cf dell'utente
    int attivita[3];  // array di 3 int (uno per attività)
} Dato;

// nodo della lista
typedef struct nodo
{
    Dato dato;         // un Dato
    struct nodo *next; // puntatore al nodo successivo
} Nodo;

typedef Nodo *Lista; // puntatore al primo nodo

void creaLista(Lista *pl);
void creaUtente(Lista *pl, CodiceFiscale cf);
void aggiorna(Lista *pl, CodiceFiscale cf, int attivita);
void stampa(Lista l); // riceve Lista l per valore (copia del puntatore alla testa)

// Lista *pl e non Lista l perché quando una funzione deve modificare la lista
// stessa (farla puntare a un nuovo primo nodo) deve ricevere l'indirizzo
// della variabile lista, cioè un puntatore a un puntatore
