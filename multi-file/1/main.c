#include <stdio.h>

int somma(int a, int b);
int differenza(int a, int b);

int main(void){
    int a, b;

    printf("Inserire due numeri:\n");

    scanf("%d%d", &a, &b);

    printf("somma:%d\n", somma(a, b));
    printf("differenza:%d\n", differenza(a, b));
}