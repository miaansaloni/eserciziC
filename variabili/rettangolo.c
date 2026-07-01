#include <stdio.h>

int main(){
    int base, altezza;
    printf("Inserire le misure di base e altezza del rettangolo:\n");
    scanf("%d%d", &base, &altezza);
    printf("Area: %dcm^2, Perimetro: %dcm\n", base*altezza, 2*(base+altezza));
}