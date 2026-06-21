#include <stdio.h>

int main(){
    int a, b, c;
    printf("Inserisci le misure dei lati per classificare il triangolo:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && a==c){
        printf("Triangolo equilatero\n");
    } else if(a==b || a==c || b==c)
        printf("Triangolo isoscele\n");
    else printf("Triangolo scaleno\n");
}