#include <stdio.h>
#define DIM 10

void inputArray(int a[], int dl){
    int i;
    printf("Inserire gli elementi nell'array\n");
    for(i=0; i<dl; i++){
        scanf("%d", &a[i]);
    }
}

int indiceMassimo(int v[], int dl){
    int m=0;
    int i;

    for(i=1; i<dl; i++){
        if(v[i]>v[m]){
            m=i;
        }
    }
    return m;
}

int main(void){
    int i, n, a[DIM]; //n = dimensione logica rischiesta

    printf("Quanti elementi?\n");
    
    scanf("%d", &n);

    inputArray(a, n);

    printf("Indice del massimo: %d\n", indiceMassimo(a, n));

    return 0;
}