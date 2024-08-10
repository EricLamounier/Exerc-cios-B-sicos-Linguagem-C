#include <stdio.h>
#include <stdlib.h>

int funcao(int n){
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return 2 * funcao(n-1) + 3 * funcao(n-2);
}

int main(){
    int n = 10;
    printf("%d\n", funcao(n));
}
