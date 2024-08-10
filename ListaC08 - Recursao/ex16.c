#include <stdio.h>
#include <stdlib.h>

int fatorial_duplo(int n){
    if(n <= 0)
        return 1;
    else
        return n * fatorial_duplo(n-2);
}

int main(){
    int n=5;
    printf("%d\n", fatorial_duplo(n));
    return 0;
}
