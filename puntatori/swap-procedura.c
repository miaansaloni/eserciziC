#include <stdio.h>

int swap(int m, int n){
    int t;
    t=m;
    m=n;
    n=t;
}

int main(void){

    int a=2, b=3;
    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}