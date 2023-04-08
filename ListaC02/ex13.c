#include <stdio.h>

int main(){

    float nota1, nota2, nota3, mediaPond;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    mediaPond = (nota1*1.0 + nota2*1.0 + nota3*2.0)/(1+1+2);

    printf("Media ponderada: %.2f\n", mediaPond);

    if(media > 60){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }

    return 0;
}
