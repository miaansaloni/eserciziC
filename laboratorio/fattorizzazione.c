#include <stdio.h>

int primo(int n){
    int i, sD=0;

    for (i = 1; i <= n; i++)
    {
        if(n%i==0){
            sD++;
        }
    }
    if(sD==2){
        return 1;
    } else{
        return 0;
    }
}

int main(void){
    int n, i, q, e;

    printf("Inserisci il numero da fattorizzare:\n");
    scanf("%d", &n);

    q=n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            if(primo(i)){
                printf("%d", i);
                e=0;
                while (q%i==0){
                    e++;
                    q=q/i;
                }
                if(e>1){
                    printf("^%d", e);
                }
                if(q>1){
                    printf(" x ");
                }
            }
        }
    }
    printf("\n");

    return 0;
}