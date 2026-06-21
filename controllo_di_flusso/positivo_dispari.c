#include <stdio.h>

int main(){
    int numero;
    printf("Inserire un numero:\n");
    scanf("%d", &numero);
    if (numero>0) printf("Positivo\n");
    if (numero%2!=0) printf("Dispari\n");

}