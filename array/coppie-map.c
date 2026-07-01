#include <stdio.h>
#define DIM 21

int main(void){
    float ascisse[DIM], ordinate[DIM];
    float a, b, c;
    int i;

    printf("Inserire i coefficienti a, b, c: \n");
    scanf("%f%f%f", &a, &b, &c);

    for(i=0; i<DIM; i++){
        ascisse[i]=-1.0f+(i*0.1f);
    }

    //Map
    for(i=0; i<DIM; i++){
        float x = ascisse[i];
        ordinate[i]=a*x*x+b*x+c;
    }

    //ForEach
    for(i=0; i<DIM; i++){
        printf("<%.1f,%.1f>\n", ascisse[i], ordinate[i]);
    }

    return 0;
}