#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int qnt = 0;
    int i;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i] == '1')
            qnt++;
    }

    printf("%d numeros 1\n", qnt);
    return 0;
}
