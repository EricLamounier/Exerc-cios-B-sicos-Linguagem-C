#include <stdio.h>
#include <stdlib.h>

int main(){
    int loteria[6] = {1,2,3,4,5,6};
    int bilhete[6] = {1, 2, 4, 55, 3, 44};
    int i, qnt = 0;

    /*
    for(i=0;i<6;i++){
        printf("Numero [%d]: ", i+1);
        scanf("%d", &loteria[i]);
    }
    */

    int j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(loteria[i] == bilhete[j]){
                qnt++;
                break;
            }
        }
    }

    int *acertos;
    acertos = (int*) calloc (qnt, sizeof(int));


    int aux = 0;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(loteria[i] == bilhete[j]){
                acertos[aux] = bilhete[j];
                aux++;
                break;
            }
        }
    }

    for(i=0;i<qnt;i++)
        printf("%d ", acertos[i]);

    free(acertos);
    return 0;
}
