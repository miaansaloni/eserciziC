#include <stdio.h>
#define DIM 10

void sort(int a[]){
    int i;

    for (i=0; i<DIM; i++){
        int m = a[i]; //elemento da inserire nella parte ordinata
        int j = i;

        //scalo verso destra degli elementi della parte ordinata maggiori di m per creare lo spazio necessario
        while(j>0 && m<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=m;
    }
}

int main(void){
    int i, a[DIM];

    printf("inserire 10 numeri in un array che verrà ordinato: \n");

    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    sort(a);

    printf("Array ordinato:\n");
    for(i=0; i<DIM; i++){
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}