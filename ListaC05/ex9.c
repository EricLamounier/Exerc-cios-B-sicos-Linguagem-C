#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i] == '0')
            str[i] = '1';
    }

    printf("%s\n", str);
    return 0;
}
