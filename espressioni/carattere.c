#include <stdio.h>

int main(){
    char carattere;

    scanf("%c", &carattere);

    if(carattere>=97 && carattere<=122){
        printf("minuscola\n");
    }else if(carattere>=65 && carattere<=90){
        printf("MAIUSCOLA\n");
    } else if(carattere>=48 && carattere<=57){
        printf("numero\n");
    }else printf("errore\n");
}