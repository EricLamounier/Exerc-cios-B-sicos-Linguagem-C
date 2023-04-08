#include <stdio.h>
#include <stdlib.h>

int somatorio_cubo(int n){
    if(n == 1)
        return 1;
    else
        return n*n*n + somatorio_cubo(n-1);
}

int main(){
    int n;
    n = 3;
    printf("%d\n", somatorio_cubo(n));
    return 0;
}
