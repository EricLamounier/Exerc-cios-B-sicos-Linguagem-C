#include <stdio.h>

int main(){

    int numHabitante;
    int i;
    int codigoConsumidor;

    float kwh;
    float consumoMes;
    float mediaConsumo;

    float consumoMaior;
    float consumoMenor;

    float totalResidencial;
    float totalComercial;
    float totalIndustrial;

    printf("Numero de habitantes: ");
    scanf("%d", &numHabitante);

    printf("Valor do kwh: ");
    scanf("%f", &kwh);

    for(i=0;i<numHabitante;i++){

        printf("Habitante %d:\n", i+1);

        printf("\tConsumo do mes: ");
        scanf("%f", &consumoMes);

        printf("\tCodigo do consumidor: ");
        scanf("%d", &codigoConsumidor);

        //inicialida o maior e menor com o primeiro habitante
        if(i==0){
            consumoMaior = consumoMes;
            consumoMenor = consumoMes;
        }

        if(consumoMes > consumoMaior)
            consumoMaior = consumoMes;

        if(consumoMes < consumoMenor)
            consumoMenor = consumoMes;


        switch(codigoConsumidor){

            case 1:
                totalResidencial += consumoMes;
                break;

            case 2:
                totalComercial += consumoMes;
                break;

            case 3:
                totalIndustrial += consumoMes;
                break;

            default:
                break;
        }

        printf("\n\n");

        mediaConsumo += consumoMes;
    }

    mediaConsumo = mediaConsumo/numHabitante;

    printf("Maior consumo: %.2f\n\n", consumoMaior);

    printf("Menor consumo: %.2f\n\n", consumoMenor);

    printf("Total de residencial: %.2f\n\n", totalResidencial);

    printf("Total de comercial: %.2f\n\n", totalComercial);

    printf("Total de industrial: %.2f\n\n", totalIndustrial);

    printf("Media total de consumo: %.2f\n\n", mediaConsumo);

    return 0;
}
