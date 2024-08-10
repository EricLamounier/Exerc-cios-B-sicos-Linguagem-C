#include <stdio.h>
#include <stdio.h>

void ler_notas(float *n1, float *n2){
    printf("Nota 1: ");
    scanf("%f", &(*n1));

    printf("Nota 2: ");
    scanf("%f", &(*n2));
}

void medias(float n1, float n2, float *simples, float *ponderada){
    *simples = (n1+n2)/2;
    *ponderada = (n1 + n2*2)/3;
}

int main(){
    float nota1, nota2, media_simples, media_ponderada;

    ler_notas(&nota1, &nota2);
    medias(nota1, nota2, &media_simples, &media_ponderada);

    printf("Nota 1: %.2f\nNota 2: %.2f\n", nota1, nota2);
    printf("Media simples: %.2f\nMedia ponderada: %.2f\n", media_simples, media_ponderada);
    return 0;
}
