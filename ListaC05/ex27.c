#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[100];
    char c;
    int i, j;
    int indice = 0;
    int palindromo = 1;

    printf("String: ");
    fgets(str, 100, stdin);

    if(str[strlen(str)-1] == '\n')
        str[strlen(str)-1] = '\0';

    //remove espacos em brancos
    for(i=0;i<strlen(str);i++){

        if(str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122){
            indice = i;

            do{
                indice++;
            }while(str[indice] == ' ');

            str[i] = str[indice];
            str[indice] = ' ';
        }
    }
    j = strlen(str)-1;

    //teste se eh palidromo
    for(i=0;i<strlen(str);i++){
        if(toupper(str[i]) != toupper(str[j])){
            palindromo = 0;
            break;
        }
        j--;
    }

    if(palindromo)
        printf("E' palindromo\n");
    else
        printf("Nao e' palindromo\n");

    return 0;
}

//socorram me subi no onibus em marrocos

