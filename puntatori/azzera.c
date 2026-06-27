#include <stdio.h>

void azzera(int *pn){
    *pn=0;
}

int main(void){
    int a=3;
    printf("prima: %d\n", a);
    azzera(&a);
    printf("dopo: %d\n", a);
    return 0;
}