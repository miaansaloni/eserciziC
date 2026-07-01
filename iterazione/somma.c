#include <stdio.h>

//recuce//
int main(void){
    int i, a, s=0;

    scanf("%d", &a);

    for (i = 0; i <= a; i++)
    {
        s=s+i;
    } 
    
    printf("%d\n", s);
    
    return 0;
}