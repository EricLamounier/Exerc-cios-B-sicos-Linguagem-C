#include <stdio.h>
#include <stdlib.h>

void pares_crescente(int n){
    if(n>-1){
        pares_crescente(n-1);
        if(n%2 == 0)
            printf("%d\n" ,n);
    }
}

int main(){
    int n;
    n = 10;
    pares_crescente(n);
    return 0;
}
