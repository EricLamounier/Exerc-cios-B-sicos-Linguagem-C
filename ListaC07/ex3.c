#include <stdio.h>
#include <stdlib.h>

int verifica(int n){
    if(n == 0)
        return 0;
    else if(n < 0)
        return -1;
    else if(n > 0)
        return 1;

}

int main(){

    int res;

    res = verifica(-6);

    printf("%d\n", res);

    return 0;
}
