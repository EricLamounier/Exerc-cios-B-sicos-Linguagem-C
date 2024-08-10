#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    int res = 0, i;

    for(i=1;i<=n;i++)
        res += i;
    return res;
}
int main(){

    int n, res;
    n = 10;

    res = somatorio(n);

    printf("Somatorio de 1 ate n: %d\n", res);

    return 0;
}
