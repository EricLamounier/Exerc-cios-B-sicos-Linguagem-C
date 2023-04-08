#include <stdio.h>

int main(){

    char letra, maiuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);

    maiuscula = letra + 32; //32 bits seguindo a tabela ascii

    printf("%c em maiscula: %c\n", maiuscula);

    return 0;
}
