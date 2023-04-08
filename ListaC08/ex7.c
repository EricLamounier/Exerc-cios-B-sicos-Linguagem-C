#include <stdio.h>
#include <stdlib.h>

void naturais_crescente(int n){
    if(n != -1){
        naturais_crescente(n-1);
        printf("%d\n", n);
    }
}

int main(){
    int n;
    n = 10;
    naturais_crescente(n);
    return 0;
}
