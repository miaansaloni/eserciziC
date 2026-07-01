#include <stdio.h>

int main(void){
    int m, n, i, q; // m=dividendo n=divisore

    printf("Inserire dividendo e divisore:\n");
    scanf("%d%d", &m, &n);

    i=m;
    q=0;

    while (i>=n)
    {
        i-=n;
        q+=1;
    }
    printf("%d/%d=%d con resto %d\n", m, n, q, i);
    

    return 0;
}