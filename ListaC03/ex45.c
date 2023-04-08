#include <stdio.h>

int main(){

    int opcao;
    float val, res;

    while(1){

        printf("Menu:\n");
        printf("1 - Km/h para m/s\n");
        printf("2 - M/s para km/h\n");
        printf("0 - Finalizar programa\n");

        scanf("%d", &opcao);

        if(opcao == 0)
            break;

        if(opcao == 1){
            printf("Valor em km/h: ");
            scanf("%f", &val);

            res = val*3.6;

            printf("%.3f m/s\n\n", res);

        }else if(opcao == 2){
            printf("Valor em m/s: ");
            scanf("%f", &val);

            res = val/3.6;

            printf("%.3f k/h\n\n", res);

        }else{

            printf("Opcao invalida\n\n");
        }
    }

    return 0;
}
