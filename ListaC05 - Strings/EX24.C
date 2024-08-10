#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char S[30];
    char c;
    int i, aux = 0;

    printf("String: ");
    fgets(S, 30, stdin);

    if(S[strlen(S)-1] == '\n')
        S[strlen(S)-1] = '\0';

    setbuf(stdin, NULL);

    printf("Caractere: ");
    scanf("%c", &c);

    do{
        printf("I: ");
        scanf("%d", &i);
    }while(i<0);

    for(i;i<strlen(S);i++){
        if(S[i] == c){
            aux = 1;
            break;
        }
    }

    if(aux)
        printf("O caractere %c foi encontrado na posicao %d\n", c, i);
    else
        printf("O caractere %c nao foi encontrado na string %s\n", c, S);

    return 0;
}
