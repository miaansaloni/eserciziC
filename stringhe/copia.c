#include <stdio.h>

int main(void){
    char s[]="Nel mezzo del cammin di";
    char s2[40]; //dim tale da garantire che la stringa non ecceda
    int i=0;

    for(i=0; s[i]!='\0'; i++){
        s2[i]=s[i];
    }

    s2[i]='\0'; //terminatore stringa s2, in modo che sia ben formata

    return 0;
}