#include <stdio.h>

int main(){

    float nota;
    int faltas;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite suas faltas: ");
    scanf("%d", &faltas);

    if(nota >= 0 && nota < 4){
        if(faltas <= 20){
            printf("E\n");
        }else{
            printf("E\n");
        }

    }else if(nota >= 4 && nota < 5){
        if(faltas <= 20){
            printf("E\n");
        }else{
            printf("E\n");
        }

    }else if(nota >= 5 && nota < 7.5){
        if(faltas <= 20){
            printf("C\n");
        }else{
            printf("D\n");
        }

    }else if(nota >= 7.5 && nota < 9){
        if(faltas <= 20){
            printf("B\n");
        }else{
            printf("C\n");
        }

    }else if(nota >= 9 && nota <= 10){
        if(faltas <= 20){
            printf("A\n");
        }else{
            printf("B\n");
        }

    }else{
        printf("Nota invalida\n");
    }

    return 0;
}
