#include <stdio.h>
#define DIM 201

int main(void){
    int a[DIM], b[DIM];
    int i;

    //array a
    for(i=0; i<DIM; i++){
        a[i]=1900+i;
    }

    //array b con gli anni bisestili
    for(i=0; i<DIM; i++){
        if(a[i]%400==0 || a[i]%4==0 && a[i]%100!=0){
            b[i]=a[i];
        } else{
            b[i]=0;
        }
    }

    for(i=0; i<DIM; i++){
        printf("%d\n", b[i]);
    }
    return 0;
}