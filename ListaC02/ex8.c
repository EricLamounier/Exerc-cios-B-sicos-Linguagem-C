#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){ //valido
        media = (nota1 + nota2)/2;
        printf("Media das notas: %.2f\n", media);

    }else{
        printf("Nota(s) invalida(s)\n");
    }

    return 0;
}
