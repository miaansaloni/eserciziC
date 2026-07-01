#include <stdio.h>

int main(void){
    int n, i, a, b, c;

    printf("Calcolo delle terne pitagoriche in cui l'ipotenusa è minore o uguale del numero inserito:\n");
    scanf("%d", &n);

    for(c=1; c<=n; c++){
        for(a=1; a<c; a++){
            for(b=a; b<c; b++){
                if(a*a+b*b==c*c){
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}