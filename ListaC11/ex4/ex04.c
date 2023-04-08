#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void vogais_consoantes(char *str, int *vogais, int *consoantes){
    int i, j;
    char v[] = {"aeiou"};
    int tamV = strlen(v);
    int size = strlen(str);
    int spaces = 0;
    int vg = 0;

    for(i=0;i<size;i++){
        for(j=0;j<tamV;j++){
            if(tolower(str[i]) == v[j])
                vg++;
        }

        //conta quantos espacos ha
        if(str[i] == ' ')
            spaces++;
    }

    //vogais
    *vogais += vg;

    //consoantes
    *consoantes += (--size - vg - spaces);

}
int main(){
    FILE *f;
    int cont = 0;
    int tentativas=0;
    int dot = 0;

    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("ERRO ao abrir o arquivo!\n");
        exit(1);
    }

    char str[1001];
    int vogais = 0, consoantes = 0;
    while(fgets(str, 1001, f) != NULL){
        vogais_consoantes(str, &vogais, &consoantes);
    }

    //NUMEROS CONTABILIZAM COMO CONSOANTE
    printf("%d vogais e %d consoantes.\n", vogais, consoantes); //20 40

    fclose(f);

    return 0;
}
