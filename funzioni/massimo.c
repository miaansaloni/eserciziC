#include <stdio.h>

int massimo(int n1, int n2){
    return(n1 >= n2 ? n1 : n2);
}

int main(void){

    int a, b;

    printf("Inserire due numeri interi:\n");
    scanf("%d%d", &a, &b);

    printf("Il massimo dei due valori inseriti è: %d\n", massimo(a, b));

    return 0;
}