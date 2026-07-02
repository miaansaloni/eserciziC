#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;

    for(i=0; i<10; i++){
        printf("%.1fC\n", 15.0 + (double) rand() / RAND_MAX * (25-0 - 15.0));
    }
    return 0;
}