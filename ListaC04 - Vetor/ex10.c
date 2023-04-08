#include <stdio.h>

int main(){

    float notas[15];
    int i;
    float media=0;

    for(i=0;i<15;i++){
        printf("Nota %d: ", i);
        scanf("%f", &notas[i]);

        media += notas[i];
    }
    media /= 15;

    printf("Media geral: %.2f\n", media);


}
