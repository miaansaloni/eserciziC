#include <stdio.h>

int main(void){
    int a;
    input:
        printf("inserisci un numero:\n");
        scanf("%d", &a);
        if(a>=0){
            printf("%d\n", a*2);
            goto input;
        }
        printf("\n");
    return 0;
}