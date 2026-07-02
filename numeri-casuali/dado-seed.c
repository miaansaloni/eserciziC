#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;

    srand(time(NULL));  //time(NULL) valore assegnato a srand()
                        //che varia fra un'esecuzione e l'altra, 
                        //numero di secondi trascorsi dal 1/1/1970

    for(i=0; i<10; i++){
        printf("%d ", 1 + rand() % 6);
    }
    
    printf("\n");

    return 0;
}