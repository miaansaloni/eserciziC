#include <stdio.h>

int main(){
    int lato;
    printf("quanto misura il lato del quadrato?\n");
    scanf("%d", &lato);
    printf("Area: %dcm^2, Perimetro: %dcm\n", lato*lato, lato*4);
}