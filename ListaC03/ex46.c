#include <stdio.h>
#include <math.h>

int main(){

    int num, res, cont = 0, chute;

    srand(time(NULL));

    num = rand() % 1000;

    while(1){

        printf("Chute: ");
        scanf("%d", &chute);

        cont++;

        if(chute == num){
            printf("Voce acertou!!!\n");
            break;

        }else if(chute > num){
            printf("Seu chute foi MAIOR que o numero!\n\n");

        }else if(chute < num){
            printf("Seu chute foi MENOR que o numero!\n\n");
        }
    }

    printf("Acertou com %d tentativas\n", cont);
    return 0;
}
