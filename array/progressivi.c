#include <stdio.h>
#define DIM 10

int main(void){
    int a[DIM], n, i;
    scanf("%d", &n);

    for(i=0; i<DIM; i++){
        a[i]=n+i+1;
    }
    for(i=0; i<DIM; i++){
        printf("%d ", a[i]);
    }

    return 0;
}