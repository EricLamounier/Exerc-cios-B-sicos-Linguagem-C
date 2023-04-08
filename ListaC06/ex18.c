#include <stdio.h>
#include <stdlib.h>

int exponenciacao(int x, float z){
    int i;
    int res = x;
    for(i=0;i<z-1;i++)
        res*=x;
    return res;
}

int main() {

    int x, z, res = 0;

    x = 3;
    z = 3;

    res = exponenciacao(x, z);

    printf("%d elevado a %d = %d", x, z, res);

    return 0;
}
