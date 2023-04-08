#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    char nome[51];
    int telefone;

    FILE *f;
    f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    do{
        printf("Telefone: ");
        scanf("%d", &telefone);

        if(telefone == 0)
            break;

        printf("Nome: ");
        setbuf(stdin, NULL);
        fgets(nome, 51, stdin);

        //remove \n
        if(nome[strlen(nome)-1] == '\n')
            nome[strlen(nome)-1] = '\0';

        fprintf(f, "Nome: %s Telefone: %d\n", nome, telefone);
    }while(telefone != 0);

    fclose(f);
    return 0;
}
