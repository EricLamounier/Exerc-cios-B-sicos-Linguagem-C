#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1, v2;

    printf("Endereco de v1: %d\n", &v1);
    printf("Endereco de v2: %d\n", &v2);

    if(&v1 < &v2)
        printf("endereco de v1 menor que o endereco de v2\n");
    else
        printf("endereco de v1 maior que o endereco de v2\n");
    return 0;
}
