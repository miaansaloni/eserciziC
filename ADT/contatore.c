//file di implementazione ADT counter

//direttiva per includere il proprio header, per importare la definizione di tipo
#include "contatore.h"

//definizione delle funzioni
void reset(Contatore *pc){
    (*pc).valore=0;
    (*pc).conta_operazioni++;
}

void inc(Contatore *pc){
    (*pc).valore++;
    (*pc).conta_operazioni++;
}

unsigned int val(Contatore c){
    return c.valore;
}