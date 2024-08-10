#include <stdio.h>
#include <stdlib.h>

void naturais_decrescente(int n){
    if(n > -1){
        printf("%d\n", n);
        naturais_decrescente(n-1);
    }
}

int main(){
    int n;
    n = 10;
    naturais_decrescente(n);
    return 0;
}
