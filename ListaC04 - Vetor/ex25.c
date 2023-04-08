#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){

    int vet[TAM];
    char str[100];
    int i=0;
    int num=0;
    int cont = 1;

    while(i<TAM){

        sprintf(str, "%d", num);
        if(num%7 != 0 || str[strlen(str) - 1] == '7'){
            vet[i] = num;
            i++;
        }

        strcpy(str, "");
        cont++;
        num++;
    }

    for(i=0;i<TAM;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
