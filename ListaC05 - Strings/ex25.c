
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[30];
    char str2[30];
    int i, tam1,tam2;
    int pri = -1;

    printf("String 1: ");
    scanf("%s", &str1);

    setbuf(stdin, NULL);

    printf("String 2: ");
    scanf("%s", &str2);

    tam1 = strlen(str1);
    tam2 = strlen(str2);

    if(tam1 < tam2)
        tam1 = tam2;

    //maior = 0  str1
    //maior = 1  str2
    for(i=0;i<tam1;i++){

        if(str1[i] < str2[i]){
            pri = 0;
            break;
        }else if(str1[i] > str2[i]){
            pri = 1;
            break;
        }
    }

    if(pri == -1){
        printf("As duas palavras sao iguais\n");
    }else{
        if(!pri)
            printf("A string %s vem primeiro\n", str1);
        else
            printf("A string %s vem primeiro\n", str2);
    }

    return 0;
}
