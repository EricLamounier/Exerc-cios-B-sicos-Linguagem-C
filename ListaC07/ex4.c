#include <stdio.h>
#include <stdlib.h>

int ehQuadradoPerfeito(int n){
    if(n >= 0){
        int i;
        for(i=0;i<n;i++){
            if(i*i == n)
                return 1;
        }
    }
    return 0;
}

int main(){

    int res;

    res = ehQuadradoPerfeito(3);
    if(res)
        printf("E' quadrado perfeito\n");
    else
        printf("Nao e' quadrado perfeito\n");

    return 0;
}

