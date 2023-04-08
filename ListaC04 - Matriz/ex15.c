#include <stdio.h>

int main(){

    char mat[5][10] = {{'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'},
                      {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'},
                      {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'},
                      {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'},
                      {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'}};

    char gabarito[10] = {'a', 'b', 'c', 'd', 'd', 'c', 'b', 'a', 'd', 'a'};
    int i, j;
    int nota;

    //le as respostas
    for(i=0;i<5;i++){
        printf("Resposta aluno [%d]: ", i+1);

        for(j=0;j<10;j++){
                setbuf(stdin, NULL);
            scanf("%c", &mat[i][j]);
        }
    }

    for(i=0;i<5;i++){

        printf("Aluno [%d]: ", i+1);
        nota = 0;

        for(j=0;j<10;j++){
            if(mat[i][j] == gabarito[j]){
                nota++;
            }
        }

        printf("nota %d.\n\n", nota);
    }

    return 0;
}
