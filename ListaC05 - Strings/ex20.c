#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char carro[5][10];
    float consumo[5];
    float menorConsumo;
    int indiceMenorConsumo;
    int i, j;

    for(i=0;i<5;i++){
        printf("Carro [%d]: ", i+1);
        setbuf(stdin, NULL);
        fgets(carro[i], 10, stdin);

        if(carro[i][strlen(carro[i])-1] == '\n')
            carro[i][strlen(carro[i])-1] = '\0';


        printf("Consumo: ");
        scanf("%f", &consumo[i]);

        printf("\n\n");
    }

    //(a)
    for(i=0;i<5;i++){
        if(i==0){
            menorConsumo = consumo[i];
            indiceMenorConsumo = i;
        }else{
            if(consumo[i] < menorConsumo){
                menorConsumo = consumo[i];
                indiceMenorConsumo = i;
            }
        }
    }

    printf("Modelo mais economico: %s\n", carro[indiceMenorConsumo]);

    //(b)
    for(i=0;i<5;i++){
        printf("O carro %s gasta %.1f litros de combustivel para percorrer 1000 km\n", carro[i], consumo[i]*1000);
    }


    return 0;
}

