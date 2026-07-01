#include <stdio.h>

//reduce//
int main(void){
    int i, s=0, n;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &n);

        s=s+n;
    }
    printf("%d\n", s);

    return 0;
}