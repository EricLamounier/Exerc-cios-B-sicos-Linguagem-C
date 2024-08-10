#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void minuscula(char *str){
    int size = strlen(str);
    int i;
    for(i=0;i<size;i++)
        str[i] = tolower(str[i]);
}

int main(){
    FILE *f;

    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char str[31];
    printf("Palavra a ser buscada: ");
    setbuf(stdin, NULL);
    scanf("%s", str);

    minuscula(str); //transforma a string lida em minuscula

    int qnt = 0;
    char palavra[31];
    while(fscanf(f, "%s", palavra) != EOF){
        minuscula(palavra);
        if(strcmp(palavra, str) == 0)
            qnt++;
    }

    printf("A string %s aparece %d vezes\n", str, qnt);

    fclose(f);
    return 0;
}
