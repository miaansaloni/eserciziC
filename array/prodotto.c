#include <stdio.h>
#define DIM 5

int main(void){
    int a[DIM];
    int i, p=1;

    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    //p = reduce
    for(i=0; i<DIM; i++){
        p*=a[i];
    }

    for(i=0; i<DIM; i++){
        printf("%d", a[i]);
        
        if(i<DIM-1){
            printf(" x ");
        }
    }
    printf(" = %d\n", p);
    return 0;
}