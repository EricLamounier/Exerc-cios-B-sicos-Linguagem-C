#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
    if(x > y)
        return x;
    return y;
}

int main(){

    int res;

    res = maior(7, 6);

    printf("%d\n", res);

    return 0;
}
