#include <stdio.h>
#include <stdlib.h>

float S(int n){
    if(n == 0)
        return 0;
    else
        return (float)(1+n*n)/n + S(n-1);
}

int main(){
    int n = 3;
    printf("%f\n", S(n));
    return 0;
}
