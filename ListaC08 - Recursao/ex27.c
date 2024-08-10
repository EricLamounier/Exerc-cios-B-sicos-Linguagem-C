#include <stdio.h>
#include <stdlib.h>

int h(int m, int n){
    if(n == 1)
        return m+1;
    else if(m == 1)
        return n+1;
    else
        return h(m, n-1) + h(m-1, n);
}

int main(){
    int n = 1, m = 10;
    printf("%d\n", h(n,m));
    return 0;
}
