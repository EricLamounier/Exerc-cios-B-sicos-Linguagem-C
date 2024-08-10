#include <stdio.h>
#include <stdlib.h>

float funct(int n){
    int i;
    float somatorio = 0;

    for(i=0;i<=n;i++){
        somatorio += (float)((i*i)+1)/(i+3);
    }
    printf("%f\n", 2/3);
    return somatorio;
}

int main(){
    int n;
    float res;

    n = 2;

    res = funct(n);

    printf("%.2f\n", res);

    return 0;
}
