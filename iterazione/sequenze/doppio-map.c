#include <stdio.h>

int doppio(int n){
    return n*2;
}

int main(void){
    int i, d;

    for (i = 1; i <= 10; i++)
    {
        d=doppio(i);
        printf("%d*2=%d\n", i, d);
    }
    
    return 0;
}