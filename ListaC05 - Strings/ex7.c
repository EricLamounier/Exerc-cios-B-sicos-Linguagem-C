#include <stdio.h>
#include <string.h>

int main(){

    char str1[50];
    char str2[50];
    int tam1 = 0, tam2 = 0;

    printf("String 1: ");
    fgets(str1, 50, stdin);

    setbuf(stdin, NULL);

    printf("String 2: ");
    fgets(str2, 50, stdin);

    while(str1[tam1] != '\0'){
        tam1++;
    }

    while(str2[tam2] != '\0'){
        tam2++;
    }

    if(tam1 != tam2){
        printf("Sao diferentes\n");

    }else{
        tam1 = 0;

        while(tam1 < tam2){

            if(str1[tam1] != str2[tam1]){
                tam1 = -1;
                break;
            }
            tam1++;
        }
        if(tam1 == -1)
            printf("Sao diferentes\n");
        else
            printf("Sao iguais\n");
    }
    return 0;
}

