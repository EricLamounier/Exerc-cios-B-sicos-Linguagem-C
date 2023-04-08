#include <stdio.h>

int main(){

    float trabalho, avaliacao, examefinal, mediaPond;

    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &trabalho);

    printf("Nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);

    printf("Nota do exame final: ");
    scanf("%f", &examefinal);

    mediaPond = (trabalho*2 + avaliacao*3 + examefinal*4)/(2+3+5);

    printf("Media ponderaa: %.2f\n", mediaPond);

    if(mediaPond <= 2.9){
        printf("Reprovado\n");

    }else if(mediaPond >= 3 && mediaPond <= 4.9){
        printf("Recuperacao\n");

    }else if(mediaPond >= 5){
        printf("Aprovado\n");
    }

}
