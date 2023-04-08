#include <stdio.h>
#include <stdlib.h>

int main(){

    int matricula[3];
    char respostas[3][10];
    int i, j;
    char gabarito[10] = {'a', 'b', 'c', 'd', 'd', 'c', 'b', 'a', 'd', 'a'};
    int nota = 0;
    float media = 0;

    //recebe as respostas de cada aluno
    for(i=0;i<3;i++){

      printf("Aluno [%d]:\n", i+1);
      printf("\tMatricula: ");
      scanf("%d", &matricula[i]);

      for(j=0;j<10;j++){
        printf("\tResposta [%d]: ", j+1);
        setbuf(stdin, NULL);
        scanf("%c", &respostas[i][j]);
      }
    }

    printf("\n\n");

    //mostra as respostas de cada aluno
    for(i=0;i<3;i++){

        printf("Aluno [%d]:\n", i+1);
        printf("\tMatricula: %d\n", matricula[i]);

        for(j=0;j<10;j++){

            printf("\tResposta [%d]: %c\n", j+1, respostas[i][j]);

            if(respostas[i][j] == gabarito[j]){
                nota++;
            }
        }

        printf("\tNota: %d\n", nota);

        if(nota >= 7)
            printf("\tAprovado!\n");
        else
            printf("\tReprovado!\n");

        printf("\n\n");

    }

    return 0;
}
