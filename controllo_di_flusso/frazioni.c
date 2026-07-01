#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("inserire due frazioni per confrontarle:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a/b == c/d){
        printf("Uguali\n");
    } else printf("diverse\n");
}