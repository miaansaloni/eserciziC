#include <stdio.h>

int valoreAssoluto(int n){
    return(n >= 0 ? n : n*-1);
}

int main(void){

    int n;

    printf("Calcolo del valore assoluto:\n");

    scanf("%d", &n);

    printf("%d\n", valoreAssoluto(n));

    return 0;
}