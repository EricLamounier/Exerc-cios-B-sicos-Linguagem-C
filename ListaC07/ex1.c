#include <stdio.h>
#include <stdlib.h>

int dobro(int n){
    return 2*n;
}

int main(){

    int res;

    res = dobro(5);

    printf("%d\n", res);

    return 0;
}
