//Interfaccia ADT counter

//typedef
typedef struct{
    unsigned int valore;
    int conta_operazioni;
}Contatore;

//dichiarazione delle funzioni
void reset(Contatore *pc);
void inc(Contatore *pc);
unsigned int val(Contatore c);