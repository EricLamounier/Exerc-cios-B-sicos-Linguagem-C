#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int tam = 0;

    printf("Digite uma string: ");
    scanf("%s", &str);

    while(str[tam] != '\0'){
        tam++;
    }

    printf("A string %s tem comprimento igual a %d\n", str, tam);

    return 0;
}
