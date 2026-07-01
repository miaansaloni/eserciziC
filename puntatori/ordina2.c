#include <stdio.h>

void swap(int *pa, int *pb){
    int t;
    t=*pb;
    *pb=*pa;
    *pa=t;
}

void ordina(int *pa, int *pb){
    if(*pa>*pb){
        swap(pa, pb);
    }
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    ordina(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}