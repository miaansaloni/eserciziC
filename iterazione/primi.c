#include <stdio.h>

//filter//
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
    int i, n;

    printf("Inserire un numero; quali sono i numeri primi precedenti al numero inserito?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if(primo(i)){
            printf("%d\n", i);
        }
    }
    
    return 0;
}