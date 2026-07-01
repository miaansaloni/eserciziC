#include <stdio.h>

int massimo(int n1, int n2, int n3){

    if(n1>=n2 && n1>=n3){
        return n1;
    }else if(n2>=n3 && n3<=n1){
        return n2;
    } else return n3;
}

int main(void){
    int a, b, c;
    printf("Inserisci tre numeri interi:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Il massimo tra i numeri inseriti è: %d\n", massimo(a, b, c));

    return 0;
}