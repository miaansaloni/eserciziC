#include <stdio.h>
#define DIM 10

int main(void){
    int a[DIM], i;

    for(i=0; i<DIM; i++){
        a[i]=i*i;
    }
    for(i=0; i<DIM; i++){
        printf("%d ", a[i]);
    }

    return 0;
}