#include <stdio.h>

int main(void){
    int i, n, p=1;

    for ( i = 1; i <= 5; i++)
    {
        scanf("%d", &n);
        p=p*n;
    }
    printf("%d\n", p);
    
    return 0;
}