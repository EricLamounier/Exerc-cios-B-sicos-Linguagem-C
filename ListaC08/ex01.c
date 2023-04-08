#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n == 0)
        return 0;
    else
        return n + somatorio(n-1);
}

int main(){
    int n;
    n = 10;
    printf("%d\n", somatorio(n));
    return 0;
}
