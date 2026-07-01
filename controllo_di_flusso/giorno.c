#include <stdio.h>

int main(){
    int numero;
    printf("Inserire un numero per avere in output  il giorno corrispondente:\n");
    scanf("%d", &numero);

    if(numero>=1 && numero<=7){
        if(numero==1){
            printf("Lunedì\n");
        }
        if(numero==2){
            printf("Martedì\n");
        }
        if(numero==3){
            printf("Mercoledì\n");
        }
        if(numero==4){
            printf("Giovedì\n");
        }
        if(numero==5){
            printf("Venerdì\n");
        }
        if(numero==6){
            printf("Sabato\n");
        }
        if(numero==7){
            printf("Domenica\n");
        }
    } else printf("Errore\n");
}