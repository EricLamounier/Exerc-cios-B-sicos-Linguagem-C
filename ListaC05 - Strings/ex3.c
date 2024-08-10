#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i;

    printf("Digite um nome: ");
    scanf("%s", &str);

    if(str[0] == 'a' || str[0] == 'A')
        printf("%s\n", str);

    return 0;
}

