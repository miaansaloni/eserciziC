#include <stdio.h>
#include "figura.h"

int main(void){

    Figura f;

    f=quadrato(2.5);
    printf("Area quadrato: %.2f cm^2\n", area(f));
    printf("Perimetro quadrato: %.2f cm\n", perimetro(f));
    
    f=rettangolo(3.5, 4.2);
    printf("Area rettangolo: %.2f cm^2\n", area(f));
    printf("Perimetro rettangolo: %.2f cm\n", perimetro(f));
    
    f=triangolo(3.2, 4.4, 6.5);
    printf("Area triangolo: %.2f cm^2\n", area(f));
    printf("Perimetro triangolo: %.2f cm\n", perimetro(f));
    
    f=cerchio(3.7);
    printf("Area cerchio: %.2f cm^2\n", area(f));
    printf("Perimetro cerchio: %.2f cm\n", perimetro(f));
    
    return 0;
}