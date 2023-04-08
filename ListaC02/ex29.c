#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n1, n2, res, acertos = 0;

    srand(time(NULL));

    n1 = rand()%100;
    n2 = rand()%100;

    printf("Pergunta 1: Quanto e' %d + %d? ", n1, n2);
    scanf("%d", &res);

    if(res == n1+n2){
        printf("Voce acertou!\n");
        acertos++;

    }else {
        printf("Voce errou, %d + %d = %d\n", n1, n2, n1+n2);
    }

    n1 = rand()%100;
    n2 = rand()%100;

    printf("\nPergunta 2: Quanto e' %d + %d? ", n1, n2);
    scanf("%d", &res);

    if(res == n1+n2){
        printf("Voce acertou!\n");
        acertos++;

    }else {
        printf("Voce errou, %d + %d = %d\n", n1, n2, n1+n2);
    }

    n1 = rand()%100;
    n2 = rand()%100;

    printf("\nPergunta 3: Quanto e' %d + %d? ", n1, n2);
    scanf("%d", &res);

    if(res == n1+n2){
        printf("Voce acertou!\n");
        acertos++;

    }else {
        printf("Voce errou, %d + %d = %d\n", n1, n2, n1+n2);
    }

    n1 = rand()%100;
    n2 = rand()%100;

    printf("\nPergunta 4: Quanto e' %d + %d? ", n1, n2);
    scanf("%d", &res);

    if(res == n1+n2){
        printf("Voce acertou!\n");
        acertos++;

    }else {
        printf("Voce errou, %d + %d = %d\n", n1, n2, n1+n2);
    }

    n1 = rand()%100;
    n2 = rand()%100;

    printf("\nPergunta 5: Quanto e' %d + %d? ", n1, n2);
    scanf("%d", &res);

    if(res == n1+n2){
        printf("Voce acertou!\n");
        acertos++;

    }else {
        printf("Voce errou, %d + %d = %d\n", n1, n2, n1+n2);
    }

    printf("\n");

    if(acertos > 1 || acertos == 0){
        printf("Voce teve %d acertos\n", acertos);
    }else{
        printf("Voce teve %d acerto\n", acertos);
    }

    return 0;
}
