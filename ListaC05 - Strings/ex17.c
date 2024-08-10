#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i, qnt = 0;
    int aux;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=0;i<strlen(str);i++){

        if(str[i] == ' '){

            aux = i;
            while(str[aux] == ' '){
                aux++;
            }

            str[i] = str[aux];
            str[aux] = ' ';
        }
    }

    printf("%s\n", str);
    return 0;
}



