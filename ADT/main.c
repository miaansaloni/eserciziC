#include <stdio.h>
#include "contatore.h"

int main(void){
    Contatore c1;
    Contatore c2;

    reset(&c1); //imposta a 0
    reset(&c2); //imposta a 0

    inc(&c1); //vale 1
    inc(&c1); //vale 2
    inc(&c2); //vale 1

    printf("%d %d\n", val(c1), val(c2)); //stampa 2 1

    return 0;
}