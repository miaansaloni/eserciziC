#include <stdio.h>

int main(void){
    int i, n, sD=0; //sD=sequenza divisori(contatore)

    printf("inserire un numero; è primo?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if(n%i==0){
            sD++;
        }
    }

    if(sD<=2){
        printf("il numero è primo\n");
    } else{
        printf("il numero ha %d divisori, dunque non è primo\n", sD);
    }

    
    return 0;
}