#include <stdio.h>

int main(){

    int opcao;
    float res;
    float num1, num2;

    while(1){

        res = 0;

        printf("Menu:\n");
        printf("1 - adicao\n");
        printf("2 - subtracao\n");
        printf("3 - multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - sair\n");

        scanf("%d", &opcao);

        if(opcao == 5)
            break;

        printf("Numero 1: ");
        scanf("%f", &num1);

        printf("Numero 2: ");
        scanf("%f", &num2);

        if(opcao == 1){
            res = num1 + num2;

        }else if(opcao == 2){
            res = num1 - num2;

        }else if(opcao == 3){
            res = num1 * num2;

        }else if(opcao == 4){
            if(num2 == 0)
                printf("Denominador invalido\n");
            else
                res = num1 / num2;

            }else{
                printf("Opcao invalida\n");
            }

        printf("Resultado: %.2f\n", res);
    }
    return 0;
}
