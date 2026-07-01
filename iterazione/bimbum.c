#include <stdio.h>

int main(void){
    int i;

    for (i = 1; i <= 100; i++)
    {
        if(i%3==0 && i%5==0){
            printf("bimbum\n");
        } else if(i%5==0){
            printf("bum\n");
        } else if (i%3==0){
            printf("bim\n");
        }else {
            printf("%d\n", i);
        }
    }
    

    return 0;
}