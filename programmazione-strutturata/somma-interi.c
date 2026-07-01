#include <stdio.h>

int main(void){
    int i, n, s=0;

    for(i=0; i<5; i++){
        printf("Inserire un numero intero positivo (i negativi verranno ignorati):\n");
        scanf("%d", &n);

        if(n<=0){
            continue;
        }
        s+=n;
    }
    printf("La somma totale è: %d\n", s);
    return 0;
}