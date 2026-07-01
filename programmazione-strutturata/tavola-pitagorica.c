#include <stdio.h>

int main(void){
    int i, j, p=0;

    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            p=j*i;
            printf("%4d", p); //4d riserva 4 caratteri di spazio per ogni numero
            if(p>50){
                goto finito;
            }
        }
        printf("\n");
    }
    finito:
        printf("finito\n");

    return 0;
}