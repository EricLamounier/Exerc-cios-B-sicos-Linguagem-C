#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Digite uma data separada por espacos. (mes dia ano) ex.: 31 12 2001: ");
    scanf("%d %d %d", &dia, &mes, &ano);

        if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){ //se for bissexto

            if(mes >= 1 && mes <= 12){ //se mes for valido

                if(mes == 2){ //se fevereiro 28 dias(bissexto)

                    if(dia >= 1 && dia <= 28){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }

                }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){ //se mes com 30 dias

                    if(dia >= 1 && dia <= 30){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }

                }else{ //se mes com 31 dias
                    if(dia >= 1 && dia <= 31){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }
                }
            }else{
                printf("Nao e' valido\n");
            }
        }else{ //se nao for bissexto
            if(mes >= 1 && mes <= 12){ //se mes for valido

                if(mes == 2){ //se fevereiro 29 dias(nao bissexto)

                    if(dia >= 1 && dia <= 29){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }

                }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){ //se mes com 30 dias

                    if(dia >= 1 && dia <= 30){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }

                }else{ //se mes com 31 dias
                    if(dia >= 1 && dia <= 31){
                        printf("E' valida\n");
                    }else{
                        printf("Nao e' valida\n");
                    }
                }
            }else{
                printf("Nao e' valido\n");
            }
        }

    return 0;
}
