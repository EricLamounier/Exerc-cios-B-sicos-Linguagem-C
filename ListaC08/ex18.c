#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 1)
        return 1;
    else
        return n * fatorial(n-1);
}

int superfatorial(int n){
    if(n == 1)
        return 1;
    else
        return fatorial(n) * superfatorial(n-1);
}

int main(){
    int n = 4;
    printf("%d\n", superfatorial(n));
    return 0;
}
