#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("inserire tre numeri interi:\n");
    scanf("%d%d%d", &n1, &n2,&n3);
    printf("%d+%d+%d=%d\n", n1, n2, n3, n1+n2+n3);
}