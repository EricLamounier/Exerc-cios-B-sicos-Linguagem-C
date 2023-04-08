#include <stdio.h>

int main(){

    int v1[10];
    int v2[10];
    int v3[20], tamV3 = 0;
    int i, j, k;
    int cont = 0;
    int contV3 = 0;

    printf("V1:\n");
    //le os valores de v1
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("\n\nV2:\n");
    //le os valores de v2
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v2[i]);
    }

    //adiciona o v1 no vetor removendo valores iguais
    for(i=0;i<10;i++){
        cont = 0;
        if(i < 9){
            for(j=i+1;j<10;j++){
                if(v1[i] == v1[j]){
                    cont++;
                    break;
                }
            }

            if(cont == 0){
                v3[tamV3] = v1[i];
                tamV3++;
            }
        }else{
            for(j=0;j<9;j++){
                if(v1[9] == v1[j]){
                    cont++;
                    break;
                }
            }
            if(cont == 0){
                v3[tamV3] = v1[i];
                tamV3++;
            }
        }
    }

    //adiciona o v1 no vetor removendo valores iguais de v2 e os q ja estao em v3
    for(i=0;i<10;i++){
        cont = 0;
        contV3 = 0;
        if(i < 9){
            for(j=i+1;j<10;j++){
                if(v2[i] == v2[j]){
                    cont++;
                    break;
                }
            }

            if(!cont){
                for(k=0;k<tamV3;k++){
                    if(v2[i] == v3[k]){
                        contV3++;
                        break;
                    }
                }

                if(!contV3){
                    v3[tamV3] = v2[i];
                    tamV3++;
                }
            }
        }else{
            for(j=0;j<9;j++){
                if(v2[9] == v2[j]){
                    cont++;
                    break;
                }
            }

            for(k=0;k<tamV3;k++){
                if(v2[i] == v3[k]){
                    contV3++;
                    break;
                }
            }

            if(!contV3){
                v3[tamV3] = v2[i];
                tamV3++;
            }
        }
    }

    printf("\nVetores unidos: ");
    for(i=0;i<tamV3;i++){
        printf("%d ", v3[i]);
    }
    return 0;
}
