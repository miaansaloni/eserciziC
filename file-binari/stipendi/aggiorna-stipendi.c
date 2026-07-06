#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pf;


    if (pf = fopen("stipendi.dat", "r+b") == NULL) // r+b scrittura in un file già aperto in binario
    {
        printf("Errore apertura file\n");
        exit(1);
    }

    //ciclo in cui leggiamo il valore di un dipendente alla volta

    //aumento del 10% se stipendio<2000
    //fflush


    //chiusura pf
    

    return 0;
}