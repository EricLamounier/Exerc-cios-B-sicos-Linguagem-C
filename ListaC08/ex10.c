#include <stdio.h>
#include <stdlib.h>

void pares_decrescente(int n){
    if(n>-1){
        if(n%2 == 0)
            printf("%d\n" ,n);
        pares_decrescente(n-1);

    }
}

int main(){
    int n;
    n = 10;
    pares_decrescente(n);
    return 0;
}

