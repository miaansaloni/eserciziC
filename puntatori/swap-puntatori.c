#include <stdio.h>

void swap(int *pn, int *pm){
    int t;
    t=*pm;
    *pm=*pn;
    *pn=t;
}

int main(void){
    int a=2, b=3;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}