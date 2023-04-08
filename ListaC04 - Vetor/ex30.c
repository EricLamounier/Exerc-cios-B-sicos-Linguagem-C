#include <stdio.h>

#define TAM 10

int main(){
        int v1[10];
        int v2[10];
        int v3[10], tamV3 = 0;
        int i, j, k;
        int cont = 0;

        //le o v1
        for(i=0;i<TAM;i++){
            printf("Numero no indice %d: ", i);
            scanf("%d", &v1[i]);
        }

        //le o v2
        for(i=0;i<TAM;i++){
            printf("Numero no indice %d: ", i);
            scanf("%d", &v2[i]);
        }

        //preenche com a interceccao
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                if(v1[i] == v2[j]){
                    if(tamV3 == 0){
                        v3[tamV3] = v1[i];
                        tamV3++;
                    }else{
                        cont = 0;
                        for(k=0;k<tamV3;k++){
                            if(v1[i] == v3[k]){
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
            }
        }

        printf("\nInterseccao: ");
        for(i=0;i<tamV3;i++){
            printf("%d ", v3[i]);
        }
    return 0;
}
