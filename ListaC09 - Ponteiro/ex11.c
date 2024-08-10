#include <stdio.h>
#include <stdlib.h>

int ordena(int *x, int *y, int *z){

    if(*x == *y && *x == *z)
    int v[3] = {*x, *y, *z};
    int i=0, j=1, aux = -1;

    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    *x = v[0];
    *y = v[1];
    *z = v[2];
}

int main(){
    int x, y, z;
    x = 2;
    y = 2;
    z = 3;

    printf("%d, %d, %d\n", x, y, z);

    ordena(&x, &y, &z);

    printf("%d, %d, %d\n", x, y, z);

    return 0;
}
