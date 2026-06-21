#include <stdio.h>

int main(){
    int numero;
    printf("Inserire un numero per calcolarne il valore assoluto:\n");
    scanf("%d", &numero);
    if(numero<0)
        printf("valore assoluto: %d\n", numero*-1);
    else
        printf("valore assoluto: %d\n", numero);
}