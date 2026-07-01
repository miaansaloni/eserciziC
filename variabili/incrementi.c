#include <stdio.h>

int main(){
    int a;
    printf("inserire un valore numerico per a:\n");
    scanf("%d", &a);
    printf("a = %d\n", a);
    a+=2;
    printf("a = a+2: %d\n", a);
    a*=2;
    printf("a = a*2: %d\n", a);
    a*=a;
    printf("a = a*a: %d\n", a);
}