#include <stdio.h>

int pari(int n){
    return n%2==0;
}

int main(void){
    int i;

    for ( i = 1; i <= 20; i++)
    {
        if(pari(i)){
            printf("%d ", i);
        }
    }
    
    return 0;
}