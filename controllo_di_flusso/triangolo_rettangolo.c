#include <stdio.h>

int main(){
    int a, b, c;
    printf("Inserisci le misure dei lati del triangolo:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a*a + b*b == c*c)
        printf("Il triangolo è rettangolo\n");
    else printf("Non è rettangolo\n");
}