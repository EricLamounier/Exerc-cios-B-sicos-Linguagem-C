#include <stdio.h>
#include <stdlib.h>

void imprime_endereco(float *v, int size){
    int i;
    for(i=0;i<size;i++)
        printf("Endereco do indice [%d]: %d\n", i, &v[i]);
}
int main(){
    float v[10] = {1.1, 2.45, 3, 4 ,5.999 ,6 ,7 ,8 ,9.65 , 0.10};
    int size = sizeof(v)/sizeof(float);
    imprime_endereco(v, size);
    return 0;
}
