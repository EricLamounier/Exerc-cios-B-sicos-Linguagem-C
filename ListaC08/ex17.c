#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 1)
        return 1;
    else
        return n * fatorial(n-1);
}

int fatorial_quadruplo(int n){
    return fatorial(2*n)/fatorial(n);
}

int main(){
    int n = 3;
    printf("%d\n", fatorial_quadruplo(3));
    return 0;
}
