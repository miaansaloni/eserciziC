#include <stdio.h>

int main(void){
    int i, n, m, p=0;

    scanf("%d%d", &n, &m);

    for ( i = 0; i < m; i++)
    {
        p+=n;
    }
    
    printf("%d\n", p);

    return 0;
}