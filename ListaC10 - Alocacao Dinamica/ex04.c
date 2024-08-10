#include <stdlib.h>
#include <stdio.h>

char *aloca_str(int tam){
    return (char*) calloc (tam,  sizeof(char));
}

int main(){
    int tam;
    char *str;

    printf("Tamanho da string: ");
    scanf("%d", &tam);

    str = aloca_str(tam);

    setbuf(stdin, NULL);
    printf("Digite a string: ");
    fgets(str, tam, stdin);

    printf("\nString lida: %s\n", str);

    free(str);
    return 0;
}
