#include <stdio.h>


int main(void){
    int a=1, b=2;
    int *pa=&a, *pb=&b;

    *pa=*pb; /////////////assegna valore/////////////

    printf("%d %d\n", *pa, *pb); // 2 2
    *pa=3;
    printf("%d %d\n", *pa, *pb); // 3 2
    return 0;
}
/*
int main(void){
    int a=1, b=2;
    int *pa=&a, *pb=&b;

    pa = pb; /////////////assegna indirizzo/////////////

    printf("%d %d\n", *pa, *pb); // 2 2 
    *pa=3;
    printf("%d %d\n", *pa, *pb); // 3 3
    return 0;
}*/
