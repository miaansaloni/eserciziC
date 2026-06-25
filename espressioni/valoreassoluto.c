#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    
    //n>=0? printf("%d\n", n) : printf("%d\n", n*-1); modo alternativo

    printf("%d\n", n >= 0 ? n : n*-1);
}