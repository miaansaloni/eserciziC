#include <stdio.h>
#include <stdlib.h>

int rnd_int(int min, int max){
    return min + rand() % (max - min + 1);
}

double rnd_double(double min, double max){
    return min + (double)rand() / RAND_MAX * (max - min);
}

int main(void){
    printf("intero casuale %d\n", rnd_int(1, 30));
    printf("double casuale %.2f\n", rnd_double(15.0, 25.0));
    return 0;
}