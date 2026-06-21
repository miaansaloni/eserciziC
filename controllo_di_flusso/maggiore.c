#include <stdio.h>

int main(){
    int n1, n2;
    printf("Inserire due numeri:\n");
    scanf("%d%d", &n1, &n2);
    if(n1>=n2)
        printf("%d è il numero maggiore tra i due inseriti\n", n1);
    else
        printf("%d è il numero maggiore tra i due inseriti\n", n2);
}