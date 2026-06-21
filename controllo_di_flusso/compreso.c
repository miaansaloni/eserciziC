#include <stdio.h>

int main(){
    int intero;

    printf("Inserire un numero:\n");
    scanf("%d", &intero);

    if(intero>=2 && intero<=5){
        printf("Compreso\n");
    } else printf("Non compreso\n");
}