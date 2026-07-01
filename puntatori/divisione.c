#include <stdio.h>

void divisione(int a, int b, int *pq, int *pr){
    if(b==0){
        printf("Errore\n");
    }else{
        *pq = a / b;
        *pr = a % b;
        printf("%d:%d=%d con resto %d\n", a, b, *pq, *pr);
    }
}

int main(void){
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    divisione(a, b, &q, &r);
    return 0;
}