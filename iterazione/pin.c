#include <stdio.h>

int main(void){
    int pin;
    int i=0;

    do
    {
        scanf("%d", &pin);
        i++;
    } while (pin!=44122 && i<3);

    if(pin==44122){
        printf("Accesso consentito\n");
    }else{
        printf("Accesso negato\n");
    }

    return 0;
}