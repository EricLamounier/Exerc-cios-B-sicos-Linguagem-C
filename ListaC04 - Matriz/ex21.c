#include <stdio.h>

int main(){

    int mat1[2][2] = {1, 2, 3, 4};
    int mat2[2][2] = {9, 8, 7, 6};
    int mat3[2][2] = {0, 0, 0, 0};

    int i, j;
    int op;
    int c;

    //le mat1
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Numero na posicao (%d, %d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    //le mat2
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Numero na posicao (%d, %d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    do{
        printf("Menu:\n");
        printf("1 - somar as duas matrizes\n");
        printf("2 - subtrair a primeira da segunda\n");
        printf("3 - adicionar uma constante às duas matrizes\n");
        printf("4 - imprimir as matrizes\n");
        printf("0 - sair\n");

        scanf("%d", &op);

        printf("\n");

        if(op > 4)
            printf("Opcao invalida!\n\n");

        switch(op){

            case 1:
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                    }
                }
                break;

            case 2:
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat3[i][j] = mat1[i][j] - mat2[i][j];
                    }
                }
                break;

            case 3:
                printf("Constante: ");
                scanf("%d", &c);

                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat1[i][j] = mat1[i][j] + c;
                    }
                }

                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat2[i][j] = mat2[i][j] + c;
                    }
                }
                break;

            case 4:
                //matriz1
                printf("Matriz 1:\n");
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        printf("%d ", mat1[i][j]);
                    }
                    printf("\n");
                }

                printf("\n");

                //matriz2
                printf("Matriz 2:\n");
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        printf("%d ", mat2[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");

                //matriz3
                printf("Matriz 3:\n");
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        printf("%d ", mat3[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
                break;

            default:
                break;

        }

    }while(op > 0);
    return 0;
}
