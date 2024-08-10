#include <stdio.h>
#include <stdlib.h>

void gera_triangulo(int n){
    int altura = 2*n-1;
    int largura = n;
    int i, j=0, cont=1, controller = 1;

    for(i=1;i<=altura;i++){
        for(j=0;j<cont;j++){
            printf("*");
        }
        controller++;

        if(controller > n){
            cont--;
        }else{
            cont++;
        }

        printf("\n");
    }
}

int main(){
    int n;
    n = 5;
    gera_triangulo(n);
    return 0;
}
