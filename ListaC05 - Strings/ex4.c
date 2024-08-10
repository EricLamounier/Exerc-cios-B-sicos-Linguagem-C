#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i;

    printf("Digite um nome: ");
    scanf("%s", &str);

    for(i=0;i<4;i++){
        printf("%c", str[i]);
    }

    return 0;
}

