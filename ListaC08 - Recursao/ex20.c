#include <stdio.h>
#include <stdlib.h>

int elevado_a(int x, int y){
    int i,res=1;
    for(i=0;i<y;i++)
        res*=x;
    return res;
}

int fatorial_exponencial(int n){
    if(n == 1)
        return 1;
    else
        return elevado_a(n, fatorial_exponencial(n-1));
}

int main(){
    int n = 4;
    printf("%d\n", fatorial_exponencial(n));
    return 0;
}
