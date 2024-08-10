#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i, qnt = 0;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=0;i<strlen(str);i++){
            str[i] += 1;
    }

    printf("%s\n", str);
    return 0;
}

