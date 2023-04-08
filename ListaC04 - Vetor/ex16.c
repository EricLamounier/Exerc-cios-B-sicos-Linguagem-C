#include <stdio.h>

int main(){

    float vet[5];
    int i, cod;



    for(i=0;i<5;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%f", &vet[i]);
    }

    printf("Menu:\n");
    printf("0 - finalizar\n");
    printf("1 - forma direta\n");
    printf("2 - forma inversa\n");

    do {
        printf("Codigo: ");
        scanf("%d", &cod);

        if(cod == 0)
            return 0;

        if(cod < 0 || cod > 2)
            printf("Codigo invalido!\n\n");


    }while(cod < 1 || cod > 2);

    if(cod == 0){
        for(i=0;i<5;i++){
            printf("%.2f ", vet[i]);
        }
    }else{
        for(i=4;i>=0;i++){
            printf("%.2f ", vet[i]);
        }
    }

    return 0;
}
