#include <stdio.h>

int main(){

    int cont = 0, n;
    float nota;

    while(1){

        printf("Digite uma nota: ");
        scanf("%f", &nota);

        if(nota < 10 || nota > 20){
            break;
        }

        cont++;
    }

    if(cont == 0){
        printf("Invalido\n");
    }else{
        printf("Media aritmetica das notas: %.2f\n", nota/cont);
    }

    return 0;
}
