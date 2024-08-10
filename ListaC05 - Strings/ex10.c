#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int qnt = 0;
    int i;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=strlen(str)-1;i>=0;i--){
        printf("%c", str[i]);
    }

    return 0;
}

